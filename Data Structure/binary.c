#include<stdio.h>
#include<stdlib.h>
int main()
{
int a[20],i,n,key,low=0,high,mid;
printf("enter the limit:");
scanf("%d",&n);
printf("enter the array elements:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter the elements to search:");
scanf("%d",&key);
high=n-1;
while(low<=high)
{
mid=(high+low)/2;
if(a[mid]==key)
{
printf("i is found");
return 0;
}
else if(key<a[mid])
high=mid-1;
else
low=mid+1;
}
printf("i is not found");
}
