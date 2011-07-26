/**
 *  Attraction.hx
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

import clothx.physics.Particle;
import flash.geom.Vector3D;

class Attraction implements Force {

	var a : Particle;
	var b : Particle;
	
	var strength : Float; // k
	
	var minDistance : Float; 
	var minDistanceSquared : Float;
	
	var on : Bool;
	
	/**
	 * @constructor
	 */
	public function new(a : Particle, b : Particle, strength : Float, minDistance : Float)
	{
		this.a = a;
		this.b = b;
		this.strength = strength;
		
		on = true;
		
		this.minDistance = minDistance;
		this.minDistanceSquared = minDistance*minDistance;
	}
	
	public function getMinimumDistance():Float
	{
		return minDistance;
	}
	
	public function setMinimumDistance(d : Float):Void
	{
		minDistance = d;
		minDistanceSquared = d*d;
	}
	
	public function turnOn():Void
	{
		on = true;
	}
	
	public function turnOff():Void
	{
		on = false;
	}
	
	public function isOn():Bool
	{
		return on;
	}
	
	public function isOff():Bool
	{
		return !on;
	}
	
	public function getStrength():Float
	{
		return strength;
	}
	
	public function setStrength(k : Float):Void
	{
		strength = k;
	}
	
	function setA(p : Particle):Void
	{
		a = p;
	}
	
	function setB(p : Particle):Void
	{
		b = p;
	}
	
	public function getOneEnd():Particle
	{
		return a;
	}
	
	public function getTheOtherEnd():Particle
	{
		return b;
	}
	
	public function apply():Void
	{
		if(on && (a.isFree() || b.isFree()))
		{
			var a2bX : Float;
			a2bX = a.position.x - b.position.x;
			var a2bY : Float;
			a2bY = a.position.y - b.position.y;
			var a2bZ : Float;
			a2bZ = a.position.z - b.position.z;
			
			var a2bDistanceSquared : Float;
			a2bDistanceSquared = a2bX*a2bX + a2bY*a2bY + a2bZ*a2bZ;
			
			if(a2bDistanceSquared < minDistanceSquared)
				a2bDistanceSquared = minDistanceSquared;
			
			var force : Float;
			force = strength * a.mass * b.mass / a2bDistanceSquared;
			
			var length : Float;
			length = Math.sqrt(a2bDistanceSquared);
			
			a2bX /= length;
			a2bY /= length;
			a2bZ /= length;
			
			a2bX *= force;
			a2bY *= force;
			a2bZ *= force;
			
			if(a.isFree()) a.force = a.force.add(new Vector3D(-a2bX, -a2bY, -a2bZ));
			if(b.isFree()) b.force = b.force.add(new Vector3D(a2bX, a2bY, a2bZ));
		}
	}

}
