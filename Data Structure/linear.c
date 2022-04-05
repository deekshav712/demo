#include<stdio.h>
void main()
{
int a[20],i,key,n,flag;
printf("enter the limit");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the key:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
if(key==a[i])
{
flag=1;
}
}
if(flag==1)
printf("i is found");
else
printf("i is not found");
}

