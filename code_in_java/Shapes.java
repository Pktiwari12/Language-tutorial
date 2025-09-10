/*class Spheare{
    float redius;
    double volume,area;
    public double  area(int r)
    {
        redius =r;
        area = 4*3.14*r*r;
        return area;
    }
    publ

}
class Circle{

}
class Cone{

}
class Triangle{

}
class Cube{

}
class Square{

}
class Cylendre{

}*/
class Area{
     float redius;
     float side,height;
     double area;
     double square_area(float side)
    {
        this.side = side;
        area = (double)this.side*this.side;
        return(area);
    }
    public double rectangle_area(float length,float breadth)
    {
        this.side = length;
        this.redius = breadth;
        area = (double)this.side*this.redius;
        return(area);
    }
    public double triangle_area(float base,float height)
    {
        this.side = base;
        this.height = height;
        area = (double)(this.side*this.height)*1/2;  
        return(area);
    }
    public double sphere_area(float redius)
    {
        this.redius = redius;
        area = (double)4*3.14*this.redius*this.redius;
        return(area);
    }
    public double Circle_area(float redius)
    {
        this.redius = redius;
        area = (double)3.14*this.redius*this.redius;
        return (area);

    }
    public double cone_area(float redius,float slantheight)
    {
        this.side = slantheight;
        this.height = redius;
        area = (double)this.side*this.height*3.14;
        return(area);

    }
    public double cube_area(float side)
    {
        this.side = side;
        area = (double)4*this.side*this.side;
        return(area);
    }
    public double cuboid_area(float length,float base,float height)
    {
        this.side = length;
        this.redius = base;
        this.height = height;
        area = (double)this.side*this.redius+this.redius*this.height+this.height*this.side;
        return(area);
    }


}
class Volume extends Area
{
    double volume;
    public double sphere_volume(float redius)
    {
        this.redius = redius;
        area = (double)4/3*3.14*this.redius*this.redius*this.redius;
        return(area);
    }
    public double cone_volume(float redius,float height)
    {
        this.redius = redius;
        this.height = height;
        area = (double)1/3*this.height*this.redius*this.redius*3.14;
        return(volume);

    }
    public double cube_volume(float side)
    {
        this.side = side;
        volume = (double)this.side*this.side*this.side;
        return(volume);
    }
    public double cuboid_volume(float length,float base,float height)
    {
        this.side = length;
        this.redius = base;
        this.height = height;
        volume = (double)this.side*this.redius*this.height;
        return(volume);
    }



}
public class Shapes {
    public static void main(String args[])
    {
        Volume s = new Volume();
        double v1=s.cube_volume(4);
        System.out.println("Cube volume"+"  "+v1);
        v1=s.cube_area(4);
        System.out.println("Cube area"+"  "+v1);
        v1=s.square_area(4);
        System.out.println("Square area"+"  "+v1);
        v1=s.rectangle_area(4,5);
        System.out.println("rectangle area"+"  "+v1);
        v1=s.rectangle_area(4,5); 
        v1=s.cuboid_area(2,3,4);
        System.out.println("Cuboid area"+"  "+v1);
        v1=s.cuboid_volume(2,3,4);
        System.out.println("Cuboid volume"+"  "+v1);
        





       
        
    }
    
}
