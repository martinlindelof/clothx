/**
 *  ModifiedEulerIntegrator.hx
 *
 *  Copyright (c) 2011 Martin Lindelof
 *  @author Martin Lindelof
 *  contact martin.lindelof(at)gmail.com
 *  website www.martinlindelof.com
 *  
 *  Copyright (c) 2009 Jeffrey Traer Bernstein (jeff@traer.cc)
 *
 *  Copyright (c) 2010, The haXe Project Contributors
 *  All rights reserved.
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions are met:
 *
 *  -   Redistributions of source code must retain the above copyright
 *      notice, this list of conditions and the following disclaimer.
 *  -   Redistributions in binary form must reproduce the above copyright
 *      notice, this list of conditions and the following disclaimer in the
 *      documentation and/or other materials provided with the distribution.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE HAXE PROJECT CONTRIBUTORS "AS IS" AND ANY
 *  EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 *  WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 *  DISCLAIMED. IN NO EVENT SHALL THE HAXE PROJECT CONTRIBUTORS BE LIABLE FOR
 *  ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 *  DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 *  SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 *  CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 *  LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 *  OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH
 *  DAMAGE.
 */
package clothx.physics;

import clothx.physics.Integrator;
import clothx.physics.ParticleSystem;
import flash.geom.Vector3D;

class ModifiedEulerIntegrator implements Integrator {

	var s : ParticleSystem;
	
	public function new(s : ParticleSystem) : Void
	{
		this.s = s;
	}
	
	public function step(t : Float) : Void
	{
		 var particles : Array<Particle>;
		 particles = s.particles;
		 
		 s.clearForces();
		 s.applyForces();
		 
		 var halftt : Float;
		 halftt = (t*t)*.5;
		 var one_over_t : Float;
		 one_over_t = 1/t;
		 
		 for(i in 0...particles.length)
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
