class area {
    float l,b,h;
    double rect(double h,double b) {
    return h*b;
    }
    double rect(float b) {
        return 2*b;
    }
    double rect(float h,float b) {
        return 0.5*h*b;
    }
}

public class meth_demo {
    public static void main(String[] args) {
    area a=new area();
        double rect=a.rect(10,20);
        double square=a.rect(10);
        double traingle=a.rect(10,20);
        System.out.println("the area of reactangle is"+rect);
        System.out.println("the area of square is"+square);
        System.out.println("the area of traingle is"+traingle);
    }
}