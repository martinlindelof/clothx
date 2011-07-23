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

import clothx.physics.Particle;
import flash.geom.Vector3D;

class Spring {

	var a : Particle;
	var b : Particle;
	
	var springConstant : Float; // ks
	
	var damping : Float;
	var restLength : Float;
	
	var on : Bool;
	
	public function new(a : Particle, b : Particle, springConstant : Float, damping : Float, restLength : Float) : Void
	{
		this.a = a;
		this.b = b;
		this.springConstant = springConstant;
		this.damping = damping;
		this.restLength = restLength;
		on = true;
	}
	
	public function turnOn() : Void
	{
		on = true;
	}
	
	public function turnOff() : Void
	{
		on = false;
	}
	
	public function isOn() : Bool
	{
		return on;
	}
	
	public function isOff() : Bool
	{
		return !on;
	}
	
	public function currentLength() : Float
	{
		return Vector3D.distance(a.position,b.position);
	}
	
	public function getStrength() : Float
	{
		return springConstant;
	}
	
	public function setStrength(ks : Float) : Void
	{
		springConstant = ks;
	}
	
	public function getDamping() : Float
	{
		return damping;
	}
	
	public function setDamping(d : Float) : Void
	{
		damping = d;
	}
	
	public function getRestLength() : Float
	{
		return restLength;
	}
	
	public function setRestLength(l : Float) : Void
	{
		restLength = l;
	}
	
	function setA(p : Particle) : Void
	{
		a = p;
	}
	
	function setB(p : Particle) : Void
	{
		b = p;
	}
	
	public function getOneEnd() : Particle
	{
		return a;
	}
	
	public function getTheOtherEnd() : Particle
	{
		return b;
	}
	
	public function apply() : Void
	{
		if(on && (a.isFree() || b.isFree()))
		{
			var a2bX : Float;
			a2bX = a.position.x - b.position.x;
			var a2bY : Float;
			a2bY = a.position.y - b.position.y;
			var a2bZ : Float;
			var a2bZ = a.position.z - b.position.z;
			
			var a2bDistance : Float;
			a2bDistance = Math.sqrt(a2bX*a2bX + a2bY*a2bY + a2bZ*a2bZ);
			
			if(a2bDistance == 0)
			{
				a2bX = 0;
				a2bY = 0;
				a2bZ = 0;
			} 
			else
			{
				a2bX /= a2bDistance;
				a2bY /= a2bDistance;
				a2bZ /= a2bDistance;
			}
			
			var springForce : Float;
			springForce = -(a2bDistance - restLength) * springConstant;
			
			var Va2bX : Float;
			Va2bX = a.velocity.x - b.velocity.x;
			var Va2bY : Float;
			Va2bY = a.velocity.y - b.velocity.y;
			var Va2bZ : Float;
			Va2bZ = a.velocity.z - b.velocity.z;
			
			var dampingForce : Float;
			dampingForce = -damping * (a2bX*Va2bX + a2bY*Va2bY + a2bZ*Va2bZ);
			var r : Float;
			r = springForce + dampingForce;
			
			a2bX *= r;
			a2bY *= r;
			a2bZ *= r;
			
			if(a.isFree()) a.force = a.force.add(new Vector3D(a2bX, a2bY, a2bZ));
			if(b.isFree()) b.force = b.force.add(new Vector3D(-a2bX, -a2bY, -a2bZ));
		}
	}	
}