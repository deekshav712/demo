class Outer {
    int outer_x=100;
    class Inner
    {
        int inner_y=200;
        void imethod()
        {
            System.out.println("Accessing from inner class:");
            System.out.println(outer_x);
            System.out.println(inner_y+outer_x);
            
        }
    }
    void display()
    {
        Inner ob1=new Inner();
        System.out.println("The value of inner class varaible"+ob1.inner_y);
        System.out.println("The value of outer class varaible"+outer_x);
            
    }
}
public class inner_cls_demo {
    public static void main(String[] args) {
        Outer obname=new Outer();
        obname.display();
        Outer.Inner obj2=obname.new Inner();
        obj2.imethod();

    }
    
}
