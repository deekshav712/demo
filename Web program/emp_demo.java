import java.util.Scanner;

class employee {
    int SSN;
    String Ename;
    int sal;
    String DOB;
    public employee(int sSN2, String ename2, int sal2, String dOB2) {
    }
    void getdata(int SSN,String Ename,int sal,String DOB) {
this.SSN=SSN;
this.Ename=Ename;
this.sal=sal;
this.DOB=DOB;
    }
    void printdata()
    {
        System.out.println(SSN+"\t"+Ename+"\t"+sal+"\t"+DOB);
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
        System.out.println("\nEnter sal");
        int sal=sc.nextInt();
        System.out.println("\nEnter DOB");
        String DOB=sc.next();
        
        e[i]=new employee(SSN,Ename,sal,DOB);
    }
    System.out.println("\nArray of data..");
    for(int i=0;i<2;i++)
    {
        e[i].printdata();
    }
}
    
}
