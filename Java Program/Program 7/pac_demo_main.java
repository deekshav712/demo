package shape;

public class pac_demo_main {
    public static void main(String[] args) {
        square square = new square();
        circle circle = new circle();
        triangle triangle = new triangle();

        square.getData((float)5.5);
        System.out.println("the area of square:"+square.area());

        triangle.getData((double)20.56,(double)10);
        System.out.println("the area of triangle:"+triangle.area());

        circle.getData((double)5.5);
        System.out.println("the area of circle:"+circle.area());
    }
    
}
