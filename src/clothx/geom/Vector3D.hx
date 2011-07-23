/*
   Vector3D.hx
   clothx
   
   Created by Martin Lindelof on 2011-07-16.
   modified from neash.geom
*/


package clothx.geom;

class Vector3D {
	
	public var w : Float;
	public var x : Float;
	public var y : Float;
	public var z : Float;
	
	inline public var length(getLength, null) : Float;
	inline public var lengthSquared(getLengthSquared, null) : Float;
	
	inline public static var X_AXIS(getX_AXIS, null) : Vector3D;
	inline public static var Y_AXIS(getY_AXIS, null) : Vector3D;
	inline public static var Z_AXIS(getZ_AXIS, null) : Vector3D;
	
	/**
	 * @constructor
	 */
	public function new(?x : Float, ?y : Float, ?z : Float, ?w : Float)
	{
		this.x = (x!=null) ? x : 0.0;
		this.y = (y!=null) ? y : 0.0;
		this.z = (z!=null) ? z : 0.0;
		this.w = (w!=null) ? w : 0.0;
	}
	
	/**
	 *  add with vector a
	 * @param a Vector3D
	 * @return Vector3D
	 */
	public function add(a : Vector3D) : Vector3D 
	{
		return new Vector3D(this.x+a.x, this.y+a.y, this.z+a.z);
	}
	
	/**
	 *  angle between vector a and b
	 * @param a Vector3D
	 * @param b Vector3D
	 * @return Float
	 */
	public static function angleBetween(a : Vector3D, b : Vector3D) : Float 
	{
		var a0 = a.clone();
		a0.normalize();
		var b0 = b.clone();
		b0.normalize();
		return Math.acos(a0.dotProduct(b0));
	}
	
	/**
	 *  clones a vector
	 * @private
	 * @return Vector3D
	 */
	public function clone() : Vector3D 
	{
		return new Vector3D(x,y,z,w);
	}
	
	/**
	 *  cross product with vector a
	 * @param a Vector3D
	 * @return Vector3D
	 */
	public function crossProduct(a : Vector3D) : Vector3D 
	{
		return new Vector3D(y*a.z - z*a.y, z*a.x - x*a.z, x*a.y - y*a.x,1);
	}
	
	/**
	 *  decrease with vector a
	 * @param a Vector3D
	 */
	public function decrementBy(a : Vector3D) : Void 
	{
		x -= a.x;
		y -= a.y;
		z -= a.z;
	}
	
	/**
	 *  distance between vector a and b
	 * @param a Vector3D
	 * @param b Vector3D
	 * @return Float
	 */
	public static function distance(a : Vector3D, b : Vector3D) : Float 
	{
		var x : Float = b.x - a.x;
		var y : Float = b.y - a.y;
		var z : Float = b.z - a.z;
		
		return Math.sqrt(x * x + y * y + z * z);
	}
	
	/**
	 *  dot product with vector a
	 * @param a Vector3D
	 * @return Float
	 */
	public function dotProduct(a : Vector3D) : Float 
	{
		return x * a.x + y * a.y + z * a.z;
	}
	
	/**
	 *  compare with an vector
	 * @param toCompare Vector3D
	 * @param ?allFour Bool
	 * @return Bool
	 */
	public function equals(toCompare : Vector3D, ?allFour : Bool = false) : Bool 
	{
		return x == toCompare.x && y == toCompare.y && z == toCompare.z && (!allFour || w == toCompare.w);
	}
	
	/**
	 *  get length
	 * @private
	 * @return Float
	 */
	public function getLength() : Float 
	{
		return Math.abs(Vector3D.distance(this,new Vector3D()));
	}
	
	/**
	 *  get length squared
	 * @private
	 * @return Float
	 */
	public function getLengthSquared() : Float 
	{
		return length * length;
	}
	
	/**
	 *  increase by a vector
	 * @param a Vector3D
	 */
	public function incrementBy(a : Vector3D) : Void 
	{
		x += a.x;
		y += a.y;
		z += a.z;
	}
	
	/**
	 *  almost equal to vector toCompare, with a tolerance level
	 * @param toCompare Vector3D
	 * @param tolerance Float
	 * @param ?allFour Bool
	 * @return Bool
	 */
	public function nearEquals(toCompare : Vector3D, tolerance : Float, ?allFour : Bool = false) : Bool 
	{
		return Math.abs(x - toCompare.x)<tolerance && Math.abs(y - toCompare.y)<tolerance && Math.abs(z - toCompare.z)<tolerance && (!allFour || Math.abs(w - toCompare.w)<tolerance);
	}
	
	/**
	 *  negate
	 * @private
	 */
	public function negate() : Void 
	{
		x*=-1;
		y*=-1;
		z*=-1;
	}
	
	/**
	 *  normalized
	 * @private
	 * @return Float
	 */
	public function normalize() : Float 
	{
		var l = length;
		if (l != 0){
			x /= l;
			y /= l;
			z /= l;
		}
		return l;
	}
	
	/**
	 *  project
	 * @private
	 */
	public function project() : Void 
	{
		x /= w;
		y /= w;
		z /= w;
	}
	
	/**
	 *  scale by factor of s
	 * @param s Float
	 */
	public function scaleBy(s : Float) : Void 
	{
		x*=s;
		y*=s;
		z*=s;
	}
	
	/**
	 *  subtract using vector a
	 * @param a Vector3D
	 * @return Vector3D
	 */
	public function subtract(a : Vector3D) : Vector3D 
	{
		return new Vector3D(x-a.x,y-a.y,z-a.z);
	}
	
	/**
	 *  toString
	 * @private
	 * @return String
	 */
	public function toString() : String 
	{
		return "Vector3D("+x+", "+y+", "+z+")";
	}
	
	public static function getX_AXIS() : Vector3D 
	{
		return new Vector3D(1,0,0);
	}
	
	public static function getY_AXIS() : Vector3D 
	{
		return new Vector3D(0,1,0);
	}
	
	public static function getZ_AXIS() : Vector3D 
	{
		return new Vector3D(0,0,1);
	}
}
