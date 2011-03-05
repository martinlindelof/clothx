/*
*   haXe code by Martin Lindelšf 2011 (martin.lindelof@gmail.com)
*   original Java code by Jeffrey Traer Bernstein (jeff@traer.cc)
*
*   license: do what-ever you want with it. But we like e-mails
*   with links to your creations :)
*
*   source code is presented as-is, (cc)
*/

package clothx.physics;

import clothx.physics.Integrator;
import clothx.physics.Particle;
import clothx.physics.Spring;
import clothx.physics.Attraction;
import clothx.physics.Force;

import flash.geom.Vector3D;

class ParticleSystem {

	public static var RUNGE_KUTTA : Int = 0;
	public static var MODIFIED_EULER :Int = 1;
	
	var integrator : Integrator;
	
	public var gravity : Vector3D;
	public var drag : Float;
	
	public var particles : Array<Particle>; // TODO: getters 
	public var springs : Array<Spring>;
	public var attractions : Array<Attraction>;
	public var custom : Array<Force>;
	
	var hasDeadParticles : Bool;
	
	public function new(?gravity : Vector3D, drag : Float = 0.001):Void
	{
		hasDeadParticles = false;
		integrator = new RungeKuttaIntegrator(this);
		
		particles = new Array();
		springs = new Array();
		attractions = new Array();
		custom = new Array();
		
		this.gravity = (gravity!=null) ? gravity : new Vector3D();
		this.drag = drag;
	}
	
	public function setIntegrator(integrator : Int):Void
	{
		switch(integrator)
		{
			case RUNGE_KUTTA:
				this.integrator = new RungeKuttaIntegrator(this);
			case MODIFIED_EULER:
				this.integrator = new ModifiedEulerIntegrator(this);
		}
	}
	
	public function setGravity(gravity : Vector3D):Void
	{
		this.gravity = gravity;
	}
	
	public function setDrag(d : Float):Void
	{
        this.drag = d;
	}
	
	public function tick(t : Float = 1):Void
	{
        integrator.step(t);
	}
	
	public function makeParticle(mass : Float = 1, ?position : Vector3D):Particle
	{
		var p:Particle;
		p = new Particle(mass, position);
		particles.push(p);
		return p;
	}
	
	public function makeSpring(a : Particle, b : Particle, springConstant : Float, damping : Float, restLength : Float):Spring
	{
		var s : Spring;
		s = new Spring(a, b, springConstant, damping, restLength);
		springs.push(s);
		return s;
	}
	
	public function makeAttraction(a : Particle, b : Particle, strength : Float, minDistance : Float):Attraction
	{
		var m : Attraction;
		m = new Attraction(a, b, strength, minDistance);
		attractions.push(m);
		return m;
	}
	
	public function clear():Void
	{
		var i : Int;
		
		for(i in 0...particles.length) particles[i] = null;
		for(i in 0...springs.length) springs[i] = null;
		for(i in 0...attractions.length) attractions[i] = null;
		
		particles = new Array<Particle>();
		springs = new Array<Spring>();
		attractions = new Array<Attraction>();
	}
	
	public function applyForces():Void
	{
		if(gravity.x != 0 || gravity.y != 0 || gravity.x != 0) // not gravity.z ?
		{
			for(i in 0...particles.length)
				particles[i].force = particles[i].force.add(gravity);
		}
		
		for(i in 0...particles.length)
		{
			var p : Particle;
			p = particles[i];
			var vdrag : Vector3D;
			vdrag = p.velocity.clone();
			vdrag.scaleBy(-drag);
			p.force = p.force.add(vdrag);
		}
		
		for(i in 0...springs.length) springs[i].apply();
		for(i in 0...attractions.length) attractions[i].apply();
		for(i in 0...custom.length) custom[i].apply();
	}
	
	public function clearForces():Void
	{
		for( i in 0...particles.length)
		{
			var p : Particle;
			p = particles[i];
			p.force.x = 0;
			p.force.y = 0;
			p.force.z = 0;
		}
	}
	
	public function numberOfParticles():Int
	{
		return particles.length;
	}
	
	public function numberOfSprings():Int
	{
		return springs.length;
	}
	
	public function numberOfAttractions():Int
	{
		return attractions.length;
	}
	
	public function getParticle(i : Int):Particle
	{
		return particles[i];
	}
	
	public function getSpring(i : Int):Spring
	{
		return springs[i];
	}
	
	public function getAttraction(i : Int):Attraction
	{
		return attractions[i];
	}
	
	public function addCustomForce(f : Force):Void
	{
		custom.push(f);
	}
	
	public function numberOfCustomForces():Int
	{
		return custom.length;
	}
	
	public function getCustomForce(i : Int):Force
	{
		return custom[i];
	}
	
	public function removeCustomForce(i : Int):Void
	{
		custom[i] = null;
		custom.splice(i, 1);
	}
	
	public function removeCustomForceByReference(f : Force):Bool
	{
		var n : Int;
		n = -1;
		
		for(i in 0...custom.length)
		{
			if(custom[i]==f)
			{
				n = i;
				break;
			}
		}
		if(n != -1)
		{
			custom[n] = null;
			custom.splice(n, 1);
			return true;
		} 
		else
		{
			return false;
		}
	}
	
	public function removeSpringByReference(s : Spring):Bool
	{
		var n : Int;
		n = -1;
		
		for(i in 0...springs.length)
		{
			if(springs[i] == s)
			{
				n = i;
				break;
			}
		}
		if(n != -1)
		{
			springs[n] = null;
			springs.splice(n, 1);
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public function removeAttraction(i : Int):Void
	{
		attractions[i] = null;
		attractions.splice(i, 1);
	}
	
	public function removeAttractionByReference(s : Attraction):Bool
	{
		var n : Int;
		n = -1;
		for(i in 0...attractions.length)
		{
			if(attractions[i] == s)
			{
				n = i;
				break;
			}
		}
		if(n != -1)
		{
			attractions[n] = null;
			attractions.splice(n, 1);
			return true;
		}
		else
		{
			return false;
		}
	}
	
	public function removeParticle(i : Int):Void
	{
		particles[i] = null;
		particles.splice(i, 1);
	}
	
	public function removeParticleByReference(p : Particle):Bool
	{
		var n : Int;
		n = -1;
		
		for(i in 0...particles.length)
		{
			if(particles[i] == p)
			{
				n = i;
				break;
			}
		}
		if(n != -1)
		{
			particles[n] = null;
			particles.splice(n, 1);
			return true;
		}
		else
		{
			return false;
		}
	}
}