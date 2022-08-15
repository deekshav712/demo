public class prg3 {
    public static void main(String[] args) {
        StringBuffer sb=new StringBuffer("Hello");
        System.out.println("capacity="+sb.capacity());
        int s=sb.length()-1;
        for(int i=s;i>=0;i--)
        {
            System.out.print(sb.charAt(i));
        }
        String upper=sb.toString().toUpperCase();
        System.out.println();
        System.out.println("uppercase="+upper);
    }
    
}