import flash.display.Sprite;
import flash.Lib;


class Clothx extends Sprite
{

	public function new()
	{
		super();
		Lib.current.addChild(this);
	}

	public static function main(): Void
	{
		new Clothx();
	}
}