package ;

import clothx.physics.Attraction;
import clothx.physics.Force;
import clothx.physics.Integrator;
import clothx.physics.ModifiedEulerIntegrator;
import clothx.physics.Particle;
import clothx.physics.ParticleSystem;
import clothx.physics.RungeKuttaIntegrator;
import clothx.physics.Spring;
import clothx.geom.Vector3D;

import flash.Lib;
import flash.events.Event;
import flash.display.Sprite;
import flash.display.Graphics;

class Test extends Sprite{

    var s : ParticleSystem;
    var g : Graphics;

    static function main()
    {
        new Test();
    }
    
    public function new()
    {
        super();
        flash.Lib.current.addChild(this);
        g = this.graphics;
        trace("test");
        s = new ParticleSystem();
        
    }
}