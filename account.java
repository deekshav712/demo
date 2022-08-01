import java.util.Scanner;

class Account{
    String owner;
    int ACNO;
    double bal;
    Account(String name,int Account,double balance){
        this.owner=name;
        this.ACNO=Account;
        this.bal=balance;

    }
    void deposit(double amount)
    {
        this.bal+=amount;
        System.out.println("Account details");
        System.out.println(owner+" "+ACNO+""+bal);;
    }
    void withdraw(double amount){
        if(this.bal<500){
            System.out.println("less than");
        }
        this.bal=bal-amount;
        System.out.println("withdraw amount="+bal);
    }
}
public class account {
     
    public static void main(String[] args) {
    Scanner sc=new Scanner(System.in);
    System.out.println("Enter owner name");
    String name=sc.next();
    System.out.println("Enetr account number");
    int Account=sc.nextInt();
    System.out.println("Balance");
    Double balance=sc.nextDouble();
    Account a=new Account(name, Account, balance);
    boolean opt=true;
    while(opt){
        System.out.println("1.DEPOSIT 2.WITHDRAW");
        int opt=sc.nextInt();
        s
        

    }
    


    
}
    
}
