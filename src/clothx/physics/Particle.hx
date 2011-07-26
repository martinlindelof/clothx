/**
 *  Particle.hx
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

import flash.geom.Vector3D;

class Particle {

	public var position : Vector3D;
	public var velocity : Vector3D;
	public var force : Vector3D;
	public var mass : Float;
	public var age : Float;
	public var fixed : Bool;
	
	var dead : Bool;
	
	public function new(mass : Float, ?position : Vector3D) : Void
	{
		this.mass = mass;
		this.position = position!=null ? position : new Vector3D();
		
		velocity = new Vector3D();
		force = new Vector3D();
		
		fixed = false;
		age = 0;
		dead = false;
	}
	
	public function distanceTo(p : Particle) : Float
	{
		return Vector3D.distance(this.position, p.position);
	}
	
	public function makeFixed() : Void
	{
		fixed = true;
		velocity.x = 0; velocity.y = 0; velocity.z = 0;
	}
	
	public function makeFree() : Void
	{
		fixed = false;
	}
	
	public function isFixed() : Bool
	{
		return fixed;
	}
	
	public function isFree() : Bool
	{
		return !fixed;
	}
	
	public function setMass(m : Float) : Void
	{
		mass = m;
	}
	
	public function reset() : Void
	{
		age = 0;
		dead = false;
		position.x = 0; position.y = 0; position.z = 0;
		velocity.x = 0; velocity.y = 0; velocity.z = 0;
		force.x = 0; force.y = 0; force.z = 0;
		mass = 1;
	}
	
	public function toString() : String
	{
		return("[object Particle]\tm:" + mass + " [" + position.x + ", " + position.y + ", " + position.z +"]");
	}

}
