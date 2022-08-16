class bank_acc{
    public int bal;
    String name;
    String addr;
    bank_acc(){
        bal=500;
        // int min_bal=500;
    }
    public void details(){
        System.out.println("Enter the name");
        Scanner se=new Scanner(System.in);
        name =se.next();
        System.out.println("Enter the address");
       addr=se.next();
    }
    public void viewdet(){
        System.out.println("Name :" +name);
        System.out.println("Address :" +addr);
    }
    public void deposit(int amt){
        bal+=amt;
        System.out.println("Bal :" +bal);
    }
    public void withdraw(int amt){
        if(bal-amt>500){
        bal-=amt;
        System.out.println("Bal :" +bal);
    }
    else{
        Less_Balance_Exception ex=new Less_Balance_Exception();
    }
}
}
class Less_Balance_Exception{
  Less_Balance_Exception(){
        System.out.println("Not enough balance");
    }
}
public class bank {
    public static void main(String[] args) {
        bank_acc acc1=new bank_acc();
        bank_acc ref;
        bank_acc acc2=new bank_acc();
        Scanner sc=new Scanner(System.in);
        int ch;
        boolean loop=true;
        System.out.println("Create 1st Acc");
        acc1.details();
        System.out.println("Create 2nd Acc");
        acc2.details();
        while (loop) {
            System.out.println("Enter the account");
            ch=sc.nextInt();
            switch (ch) {
                case 1:
                    ref=acc1;
                    break;
                case 2:
                    ref=acc2;
                    break;
                default:
                System.out.println("Invalid Choice");
                loop=false;
                continue;
            }
            System.out.println("1.Deposit 2.Withdraw 3.Exit 4.View Details");
            System.out.println("Enter your choice");
            ch=sc.nextInt();
            switch (ch) {
                case 1:
                System.out.println("Enter the amount");
                int amt=sc.nextInt();
                ref.deposit(amt);
                break;
                case 2:
                System.out.println("Enter the amount");
                amt=sc.nextInt();
                ref.withdraw(amt);
                break;
                case 3:
                loop=false;
                break;
                case 4:
                ref.viewdet();
                break;
                default:
                loop=false;
                break;
            }
        }
    }
}
