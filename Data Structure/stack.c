#include<stdio.h>
#include<stdlib.h>
#define maxsize 3
int stack[maxsize],top=-1,i,num;
 void push()
 {
 if(top==maxsize-1)
 printf("\nstack is full");
 else
 {
 printf("\nenter the elements to push:\n");
 scanf("%d",&num);
 stack[++top]=num;
 }
 }
 
 void pop()
 {
 if(top==-1)
 {
 printf("\nstack is empty:\n");
 }
 else
 {
 printf("\n%d is popped",stack[top]);
 top--;
 }
 }
 
 void display()
 {
 if(top==-1)
 {
 printf("\nstack is empty\n");
 }
 else
 {
 printf("\nstack elementts are:");
 for(i=0;i<=top;i++)
 printf("%d\t",stack[i]);
 }
 }
 
 void main()
 {
 int ch;
 while(op)
 {
 printf("\nstack operation are:\n");
 printf("\n1.push\n2.pop\n3.display\n5.exit\n");
 printf("\nenter your choice");
 scanf("%d",&ch);
 switch(ch)
 {
 case 1:push();
 break;
 case 2:pop();
 break;
 case 3:display();
 break;
 case 4:exit(0);
 default:
 printf("\ninvalid choice:\n");
 break;
 }
 printf("do you want to continue?(1/0)");
 scanf("%d",&op);
 }
 }
 
 
 
 
 
