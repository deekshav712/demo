#include<stdio.h>
int n;
void Selectionsort(int a[])
{
int i,j,pos,temp;
for(i=0;i<n-1;i++)
{
pos=i;
for(j=i+1;j<n;j++)
{
if(a[pos]<a[j])
{
pos=j;
}
}
if(pos!=i)
{
temp=a[i];
a[i]=a[pos];
a[pos]=temp;
}
}
}
int main()
{
int a[50],i;
printf("enter the value of n:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
Selectionsort(a);
printf("sorted order:");
for(i=0;i<n;i++)
printf("%d\t",a[i]);
return 0;
}


