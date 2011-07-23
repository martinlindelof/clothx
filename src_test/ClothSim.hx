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
    
    var overlay : Sprite;

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
        s.setIntegrator(ParticleSystem.RUNGE_KUTTA);
        var sx : Int;
        sx = 150;
        var sy : Int;
        sy = 40;
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
        handle1.graphics.beginFill(0xd9d9d9);
        handle1.graphics.drawCircle(0,0,20);
        handle1.graphics.endFill();
        handle1.graphics.lineStyle(1,0x333333);
        handle1.graphics.moveTo(0,-3);
        handle1.graphics.lineTo(0,4);
        handle1.graphics.moveTo(4,0);
        handle1.graphics.lineTo(-3,0);
        
        handle1.x = particles[0][0].position.x;
        handle1.y = particles[0][0].position.y;
        
        
        handle2 = new Sprite();
        this.addChild(handle2);
        handle2.graphics.beginFill(0xd9d9d9);
        handle2.graphics.drawCircle(0,0,20);
        handle2.graphics.endFill();
        handle2.graphics.lineStyle(1,0x333333);
        handle2.graphics.moveTo(0,-3);
        handle2.graphics.lineTo(0,4);
        handle2.graphics.moveTo(4,0);
        handle2.graphics.lineTo(-3,0);
        
        handle2.x = particles[0][gridSize-1].position.x;
        handle2.y = particles[0][gridSize-1].position.y;
        
        particles[0][0].makeFixed();
        particles[0][gridSize-1].makeFixed();
        
        handle1.buttonMode = handle2.buttonMode = true;
        handle1.addEventListener(MouseEvent.MOUSE_DOWN, handleMouse);
        handle2.addEventListener(MouseEvent.MOUSE_DOWN, handleMouse);
        
        overlay = new Sprite();
        overlay.graphics.beginFill(0xFFFFFF);
        overlay.graphics.drawRect(0, 0, stage.stageWidth, stage.stageHeight);
        overlay.graphics.endFill();
        overlay.alpha = .75;
        stage.addChild(overlay);
        for(k in 0...10) s.tick(1);
        onFrame(null);
        stage.addEventListener(Event.MOUSE_LEAVE, onLeave);
        stage.addEventListener(MouseEvent.MOUSE_OVER, onEnter);
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
    
    function onFrame(_):Void
    {
        if(handle1.x > stage.stageWidth) handle1.x = stage.stageWidth;
        else if(handle1.x < 0) handle1.x = 0;
        if(handle1.y > stage.stageHeight) handle1.y = stage.stageHeight;
        else if(handle1.y < 0) handle1.y = 0;
        if(handle2.x > stage.stageWidth) handle2.x = stage.stageWidth;
        else if(handle2.x < 0) handle2.x = 0;
        if(handle2.y > stage.stageHeight) handle2.y = stage.stageHeight;
        else if(handle2.y < 0) handle2.y = 0;
        
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