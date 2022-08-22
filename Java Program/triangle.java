package shape;

public class triangle {
    double base;
    double height;
    public void getData(double temp1,double temp2){
        base=temp1;
        height=temp2;
    }
    public double area()
    {
        return((1.0/2.0)*(base*height));
    }
}
