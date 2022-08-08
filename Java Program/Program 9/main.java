package prgm9;

public class main {
    public static void main(String[] args) 
    {
       fixed f=new fixed(10);
       dynamic d=new dynamic(5);
       Isimplestack istack;
      istack=f;
      System.out.println("Content of Fixed Stack :");
      for(int i=0;i<10;i++)
       {
        istack.push((char)('A'+i));
       }
       for(int i=0;i<10;i++)
      {
        System.out.print(f.pop()+"\t");
      }
   
      System.out.println("\nContent of dynamic Stack :");
      for(int i=0;i<10;i++)
       {
        istack.push((char)('A'+i));
       }
       for(int i=0;i<10;i++)
      {
        System.out.print(f.pop()+"\t");
      }
    }
}
