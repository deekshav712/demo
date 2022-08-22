package shape;

public class circle {
    double radius;
    double height;
    public void getData(double temp)
    {
        radius=temp;
    }
    public double area()
    {
        return((3.1427*(2.0*radius)*(2.0*radius))/4.00);
    }
}
