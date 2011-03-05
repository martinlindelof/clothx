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

import clothx.physics.ParticleSystem;
import clothx.physics.Integrator;

import flash.geom.Vector3D;

class ModifiedEulerIntegrator implements Integrator {

	var s : ParticleSystem;
	
	public function new(s : ParticleSystem):Void
	{
		this.s = s;
	}
	
	public function step(t : Float):Void
	{
		 var particles : Array<Particle>;
		 particles = s.particles;
		 var p_length : Int;
		 p_length = particles.length;
		 
		 s.clearForces();
		 s.applyForces();
		 
		 var halftt : Float;
		 halftt = (t*t)*.5;
		 var one_over_t : Float;
		 one_over_t = 1/t;
		 
		 for(i in 0...p_length)
		 {
		 	var p : Particle;
		 	p = particles[i];
		 	
		 	if(!p.fixed)
		 	{
		 		var ax : Float;
		 		ax = p.force.x/p.mass;
		 		var ay : Float;
		 		ay = p.force.y/p.mass;
		 		var az : Float;
		 		az = p.force.z/p.mass;
		 		
		 		var vel_div_t : Vector3D;
		 		vel_div_t = p.velocity.clone();
		 		vel_div_t.scaleBy(one_over_t);
		 		p.position = p.position.add(vel_div_t);
		 		p.position = p.position.add(new Vector3D(ax*halftt, ay*halftt, az*halftt));
		 		p.velocity = p.velocity.add(new Vector3D(ax*one_over_t, ay*one_over_t, az*one_over_t));
		 	}
		}
	}
}