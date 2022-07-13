import java.security.spec.EncodedKeySpec;
import java.util.Scanner;

class employee{
     
     int SSN;
     String Ename;
     String DOB;
     int sal;
     employee(int SSN,String Ename, String DOB,int sal)
     {
        this.SSN=SSN;
        this.Ename=Ename;
        this.DOB=DOB;
        this.sal=sal;
     }
     void printdata()
     {
        System.out.println(SSN+"\t"+Ename+"\t"+DOB+"\t"+sal);
     }
    
  }
  
  
  public class emp_demo {public static void main(String[] args) {
    employee [] e=new employee[2];
    Scanner sc=new Scanner(System.in);
    for(int i=0;i<2;i++)
    {
        System.out.println("\nEnter SSN");
        int SSN=sc.nextInt();
        System.out.println("\nEnter Ename");
        String Ename=sc.next();
        System.out.println("\nEnter DOB");
        String DOB=sc.next();
        System.out.println("\nEnter sal");
        int sal=sc.nextInt();
    
       
        
        e[i]=new employee(SSN,Ename,DOB,sal);
      }
      System.out.println("\n array of data...");
      for(int i=0;i<2;i++)
      {
        e[i].printdata();
      }
     }
    
}
