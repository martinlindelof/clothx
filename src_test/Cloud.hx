package ;

import flash.Lib;
import flash.display.Sprite;
import flash.events.Event;
import flash.events.MouseEvent;
import flash.geom.Vector3D;
import clothx.physics.ParticleSystem;
import clothx.physics.Particle;

class Cloud extends Sprite
{

    var s : ParticleSystem;
    var mouse : Particle;
    var others : Array<Particle>;
    var overlay : Sprite;

    static function main()
    {
        new Cloud();
    }
    
    public function new()
    {
        super();
        Lib.current.addChild(this);
        s = new ParticleSystem(null, .10);
        mouse = s.makeParticle();
        mouse.makeFixed();
        others = new Array();
        for(i in 0...1000)
        {
            others[i] = s.makeParticle(1.0,new Vector3D(Math.random()*stage.stageWidth, Math.random()*stage.stageHeight,0));
            s.makeAttraction(mouse, others[i], 5000, 50);
            s.makeAttraction(others[i], mouse, -500, 10);
        }
        overlay = new Sprite();
        overlay.graphics.beginFill(0xFFFFFF);
        overlay.graphics.drawRect(0, 0, stage.stageWidth, stage.stageHeight);
        overlay.graphics.endFill();
        overlay.alpha = .75;
        stage.addChild(overlay);
        onFrame(null);
        stage.addEventListener(Event.MOUSE_LEAVE, onLeave);
        stage.addEventListener(MouseEvent.MOUSE_OVER, onEnter);
    }
    
    function onEnter(_)
    {
        overlay.visible = false;
        stage.addEventListener(Event.ENTER_FRAME, onFrame);
    }
    
    function onLeave(_)
    {
        overlay.visible = true;
        stage.removeEventListener(Event.ENTER_FRAME, onFrame);
    }
    
    function onFrame(_)
    {
        mouse.position.x = stage.mouseX;
        mouse.position.y = stage.mouseY;
        s.tick(1);
        graphics.clear();
        for(i in 0...others.length)
        {
            if(i%20==0) graphics.beginFill(0xff0044);
            else if(i%25==0) graphics.beginFill(0x5500ff);
            else graphics.beginFill(0x333333);
            graphics.drawCircle(others[i].position.x, others[i].position.y, 5);
            graphics.endFill();
        }
        
        for(j in s.particles)
        {
            if(j.position.x > stage.stageWidth)
            {
                j.velocity.x *= -.95;
                j.position.x = stage.stageWidth;
            }
            else if(j.position.x < 0)
            {
                j.velocity.x *= -.95;
                j.position.x = 0;
            }
            if(j.position.y > stage.stageHeight)
            {
                j.velocity.y *= -.95;
                j.position.y = stage.stageHeight;
            }
            else if(j.position.y < 0)
            {
                j.velocity.y *= -.95;
                j.position.y = 0;
            }
        }
        
    }
}