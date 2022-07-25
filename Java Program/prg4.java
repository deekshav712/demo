class twodshape
{
    double height;
    double width;
    /*double getheight(){
     return height;
    }
    double getwidth(){
     return width;
    }
    void setheight( double h){
     height= h;
    }
    void setwidth(double w){
     width=w;
    }
    void showDim(){
    System.out.println("width and height are " +width+ " and "+height);
    }*/
     /*shape(){
         height=50;
         width=20;
         }*/
     /*void print_sup(){
         System.out.println("i'm super class");
   }*/
 }
     class triangle extends twodshape
     {
         String s;
         triangle(double h,double w){
             height=h;
             width=w;
         }
         //triangle(){
           //  height=20;
            // width=20
         //}
         /*triangle(double h,double w)
         {
             height=h;
             width=w;
         }*/
         double area()
         {
           return height*width/2;
 
         }
         /*void print_sub()
         {
             System.out.println("i am in sub class extends from super class");
         }*/
 
     }
  class rectangle extends twodshape
  {
     double length;
     double breadth;
     rectangle(double l,double b)
     {
         length=l;
         breadth=b;
     }
     double area()
     {
         return length*breadth;
     }
  }
 
 public class prg4 {
    public static void main(String[] args) 
    {
     triangle t1=new triangle(10,20);
     rectangle t2=new rectangle(20,30);
     /*t1.print_sup();
     t1.print_sub();*/
     System.out.println("area of triangle="+t1.area());
     System.out.println("area of rectangle="+t2.area());
 
 }
     
 }
    
