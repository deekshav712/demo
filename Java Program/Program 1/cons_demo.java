class cons_box {
    double l,b,h;
cons_box(double l,double h,double b)
    {
        this.l=l;
        this.b=b;
        this.h=h;
    }
    cons_box(double l) {
       l=h=b=l;
    }
double volume()
{
   return l*b*h;
}
    void print()
    {
        System.out.println("method overloading");
    }
        void print(double v)
        {
            System.out.println("volume of box="+v);
        }
}
public class cons_demo {
    public static void main(String[] args) {
        cons_box cuboid=new cons_box(10,20,10);
        cons_box cube=new cons_box(10);
        double v1=cuboid.volume();
        double v2=cube.volume();
        cuboid.print();
        cube.print(v1);
        cube.print(v2);
    }
