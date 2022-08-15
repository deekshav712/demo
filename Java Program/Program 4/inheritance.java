interface Rectangle {
    float area_rect(float x,float y);
}
 interface Triangle {
    float area_tri(float x,float y);

 }

 class Area implements Triangle,Rectangle {
    public float area_rect(float x,float y) {
        return(x*y);
    }
    public float area_tri(float x,float y) {
        return(x*y)/2;
    }

 }
public class inheritance {
    public static void main(String[] args) {
        Area a=new Area();
        System.out.println("Area of rectangle: "+a.area_rect(20,30));
        System.out.println("Area of triangle: "+a.area_tri(20,30));
    }
    
}
