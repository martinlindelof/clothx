package ;

import flash.Lib;
import flash.display.Sprite;
import flash.events.MouseEvent;
import flash.events.Event;
import flash.geom.Vector3D;
import clothx.physics.ParticleSystem;
import clothx.physics.Particle;

class ClothSim extends Sprite {

    var s : ParticleSystem;
    
    var gridSize : Int;
    var particles : Array<Array<Particle>>;
    
    var handle1 : Sprite;
    var handle2 : Sprite;

    static function main()
    {
        new ClothSim();
    }
    
    public function new()
    {
        super();
        flash.Lib.current.addChild(this);
        particles = new Array();
        s = new ParticleSystem(new Vector3D(0, 3.2, 0), .06);
        
        var sx : Int;
        sx = 200;
        var sy : Int;
        sy = 80;
        var sp : Int;
        sp = 25;
        
        gridSize = 8;
        
        
        
        //create a grid for particles
        for(i in 0...gridSize)
        {
            particles[i] = new Array<Particle>();
            for(j in 0...gridSize)
            {
                particles[i][j] = s.makeParticle(.8, new Vector3D(sx+j*sp, sy+i*sp, 0));
            }
        }
        
        
        // create spring
        for(i in 0...gridSize)
        {
            for(j in 0...gridSize-1)
            {
                s.makeSpring(particles[i][j], particles[i][j+1], 1, .6, sp);
            }
        }
        for(i in 0...gridSize-1)
        {
            for(j in 0...gridSize)
            {
                s.makeSpring(particles[i][j], particles[i+1][j], 1, .6, sp);
            }
        }
        
        // dragable handlers
        
        handle1 = new Sprite();
        this.addChild(handle1);
        handle1.graphics.beginFill(0x000000,.5);
        handle1.graphics.drawCircle(0,0,20);
        handle1.graphics.endFill();
        
        handle1.x = particles[0][0].position.x;
        handle1.y = particles[0][0].position.y;
        
        
        handle2 = new Sprite();
        this.addChild(handle2);
        handle2.graphics.beginFill(0x000000,.5);
        handle2.graphics.drawCircle(0,0,20);
        handle2.graphics.endFill();
        handle2.x = particles[0][gridSize-1].position.x;
        handle2.y = particles[0][gridSize-1].position.y;
        
        particles[0][0].makeFixed();
        particles[0][gridSize-1].makeFixed();
        
        handle1.buttonMode = handle2.buttonMode = true;
        handle1.addEventListener(MouseEvent.MOUSE_DOWN, handleMouse);
        handle2.addEventListener(MouseEvent.MOUSE_DOWN, handleMouse);
        
        this.addEventListener(Event.ENTER_FRAME, onFrame);
    }
    
    function handleMouse(e:MouseEvent):Void
    {
        switch(e.type)
        {
            case MouseEvent.MOUSE_DOWN:
            e.currentTarget.startDrag();
            stage.addEventListener(MouseEvent.MOUSE_UP, handleMouse);
            
            case MouseEvent.MOUSE_UP:
            handle1.stopDrag();
            handle2.stopDrag();
            stage.removeEventListener(MouseEvent.MOUSE_UP, handleMouse);
        }        
    }
    
    function onFrame(_):Void
    {
        var i : Int;
        var j : Int;
        
        particles[0][0].position.x = handle1.x;
        particles[0][0].position.y = handle1.y;
        
        particles[0][gridSize-1].position.x = handle2.x;
        particles[0][gridSize-1].position.y = handle2.y;
        
        s.tick(1);
        
        graphics.clear();
        graphics.lineStyle(1,0x333333);
        
        for(i in 0...gridSize)
        {
            for(j in 0...gridSize-1)
            {
                graphics.moveTo(particles[i][j].position.x, particles[i][j].position.y);
                graphics.lineTo(particles[i][j+1].position.x, particles[i][j+1].position.y);
            }
        }
        for(i in 0...gridSize-1)
        {
            for(j in 0...gridSize)
            {
                graphics.moveTo(particles[i][j].position.x, particles[i][j].position.y);
                graphics.lineTo(particles[i+1][j].position.x, particles[i+1][j].position.y);
            }
        }
    }

}