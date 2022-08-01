package mca018;

import java.util.Scanner;

class LessBalanceEception extends Exception{
    LessBalanceException(double amt)
    {

    }
}

class user {
    String name;
    user(String name){
        this.name=name;
    }

    class Account {
        int acc_no;
        double Balance;
        Account(int acc_no,double Balance)
        {
         this.acc_no=acc_no;
         this.Balance=Balance;
        }
    }
    Account [] a=new Account[2];
    void deposite(double amount,int a_no)
    {
        int found=0,k=-1;
        for(int i=0;i<2;i++)
        if(a[i].acc_no==a_no)
        {
            a[i].Balance+=amount;
            found=1;
            k=i;
            break;
        }
        if(found==1)
        {
            System.out.println("Balance Updated");
            display(a[k].acc_no);
        }
        else
        System.out.println("Account Number Does Not Exist");
    }
    void withdraw(double amount,int acc_no)throws LessBalanceException
    {
        int k=-1;int found=0;
        for(int i=0;i<2;i++)
        if(a[i].acc_no==acc_no)
        {
            k=i;
            found=1;
            break;
        }    
        if(found==1)
        {
            if((a[k].Balance<500)||(a[k].Balance<amount))
        throw new LessBalanceException(amount);
        else
        {
            a[k].Balance-=amount;
            display(a[k].acc_no);
        }
        }
        else
        System.out.println("Account Number Doesn't Exist");
    }
}
void create_account()
{
    Scanner sc=new Scanner(System.in);
    for(int i=0;i<2;i++)
    {
        System.out.println("enter Account Number");
        int acc_no=sc.nextInt();
        System.out.println("enter Balance");
        double Bal=sc.nextDouble();
        a[i]=new Account(acc_no,Bal);
    }
void display(int acc_no)
{
    int k=-1,found=0;
    for(int i=0;i<2;i++)
    if(a[i].acc_no==acc_no)
    {
        k=i;
        found=1;
        break;
    }
    if(found==1)
    {
        System.out.println("-----------ACCOUNT DETAILS-----------");
        System.out.println(name+"\t"+a[k].acc_no+"\t"+a[k].Balance);
        System.out.println("-------------------------------------");
    }
}
}


public class program5 {
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        System.out.println("CREATE ACCOUNT WITH MINIMUM BALANCE 500");
        System.out.println("Enter Owner Name");
        String name=sc.next();
        int acc_no;
        user u=new user(name);
        u.create_account();
        System.out.println("account created succesfully");
        Boolean opt=true;
        while(opt)
        {
            System.out.println("------------------------------------------");
            System.out.println("1.BALANCE ENQUIRY 2.DEPOSITE 3.WITHDRAWAL");
            System.out.println("------------------------------------------");
            System.out.println("Enter your choice");
            int ch=sc.nextInt();
            switch(ch)
            {
                case 1:
                System.out.println("Your Account details");
                System.out.println("Enter account number");
                acc_no=sc.nextInt();
                u.display(acc_no);
                break;

                case 2:
                System.out.println("Enter account No");
                acc_no=sc.nextInt();
                System.out.println("Enter Amount to deposite");
                double amt=sc.nextDouble();
                u.deposite(amt,acc_no);
                break;

                case 3:
                System.out.println("enter account number");
                acc_no=sc.nextInt();
                System.out.println("Enter Amount to withdrawal");
                double amount=sc.nextDouble();
                u.withdrawal(amount,acc_no);
            }
            catch(LessBalanceException e){}
            break;
        }
        }

    }
    
}
