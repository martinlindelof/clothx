package ;

import flash.Lib;
import flash.display.Sprite;
import flash.geom.Vector3D;
import flash.events.Event;

import clothx.physics.ParticleSystem;
import clothx.physics.Particle;
import clothx.physics.Spring;

class Grid extends Sprite {


    var s : ParticleSystem;
    var attractor : Particle;
    var p_fixed : Array<Particle>;
    var p_free : Array<Particle>;
    
    var gridSize : Int;
    var particles : Array<Particle>;
    

    static function main():Void
    {
        new Grid();
    }
    
    public function new():Void
    {
        super();
        flash.Lib.current.addChild(this);
        gridSize = 12;
        p_fixed = new Array();
        p_free = new Array();
        s = new ParticleSystem(new Vector3D(0, 0, 0),.2);
        s.setIntegrator(ParticleSystem.MODIFIED_EULER);
        
        var sx : Int;
        sx = 110;
        var sy : Int;
        sy = 50;
        var sp : Int;
        sp = 25;
        
        attractor = s.makeParticle(1, new Vector3D(300,300,0));
        attractor.makeFixed();
        
        // grid
        for(i in 0...gridSize)
        {
            for(j in 0...gridSize)
            {
                var a : Particle;
                a = s.makeParticle(.8,new Vector3D(sx+j*sp, sy+i*sp, 0));
                a.makeFixed();
                var b : Particle;
                b = s.makeParticle(.8,new Vector3D(sx+j*sp, sy+i*sp, 0));
                
                p_fixed.push(a);
                p_free.push(b);
                
                s.makeSpring(a, b, .1, .01, 0);
                s.makeAttraction(attractor, b, -46800, 100);
            }
        }
        
        this.addEventListener(Event.ENTER_FRAME, onFrame);
        
    }
    
    function onFrame(_):Void
    {
        this.graphics.clear();
        s.tick(1);
        
        attractor.position.x = mouseX;
        attractor.position.y = mouseY;
        
        
        this.graphics.beginFill(0xF2F2F2,1);
        this.graphics.drawCircle(attractor.position.x, attractor.position.y, 60);
        this.graphics.endFill();
        
        this.graphics.lineStyle(1, 0xFF0044);
        
        for(i in 0...p_fixed.length)
        {
            this.graphics.moveTo(p_fixed[i].position.x, p_fixed[i].position.y);
            this.graphics.lineTo(p_free[i].position.x, p_free[i].position.y);
        }
        
        this.graphics.lineStyle(1, 0x333333);
        var count : Int;
        count = 0;
        
        for(i in 0...gridSize)
        {
            for(j in 0...gridSize)
            {
                if(j < gridSize-1)
                {
                    this.graphics.moveTo(p_free[count].position.x, p_free[count].position.y);
                    this.graphics.lineTo(p_free[count+1].position.x, p_free[count+1].position.y);
                }
                count++;
            }
        }
        
        count = 0;
        
        for(i in 0...gridSize-1)
        {
            for(j in 0...gridSize)
            {
                this.graphics.moveTo(p_free[count].position.x, p_free[count].position.y);
                this.graphics.lineTo(p_free[count+gridSize].position.x, p_free[count+gridSize].position.y);
                count++;
            }
        }
        
    }

}