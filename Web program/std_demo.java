class student {
    int usn;
    String Name;
    void getdata(int U,String N) {
        this.usn=U;
        this.Name=N;
    }
    void printdata() {
        System.out.println(Name+"\t"+usn);
    }
}
public class std_demo {public static void main(String[] args) {
    student s=new student();
    s.getdata(10,"smith");
    s.printdata();
}
    
}
