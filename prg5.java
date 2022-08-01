import java.util.Scanner;

import javax.security.auth.login.AccountException;

class Account{
    String Owner;
    String Acc_no;
    double Balance;
    Account(String Account,String Name,Double Bal){
        this.Owner=Name;
        this.Balance=Bal;
        this.Acc_no=Account;
    }
    void deposite(double amount){
        this.Balance+=amount;
        System.out.println("the Balance details");
        System.out.println(Owner+ "\t" +Acc_no+ "\t"+Balance );
    }
    void withdrawal(double amount){
        if(this.Balance<500)
        {
            System.out.println("less balance");
            return;
        }
        this.Balance-=amount;
}
}

public class prg5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter owner name:");
        String name=sc.next();
        System.out.println("Enter Account number:");
        String acc=sc.next();
        System.out.println("balance");
        double bal=sc.nextDouble();
        Account [] a=new Account[2];
        Boolean opt=true;
        while(opt)
        {
            System.out.println("1.BALANCE ENQUIRY \n 2.DEPOSITE \n 3.WITHDRAWAL");
            System.out.println("Enter your choice");
            int ch=sc.nextInt();
            switch(ch)
            {
                case 1:System.out.println("Enter your deposite");
                Double amt=sc.nextDouble();
                a.deposite(amt);
                break;
                case 2:
                System.out.println("Enter Amount to withdrawl");
                Double Amount=sc.nextDouble();
                a.withdrawal(Amount);
                break;
            }
        }

    }
    
}
