#include<stdio.h>
#include<stdlib.h>
void main()
{
int data[7],i,rec[7],c1,c2,c3,c;
printf("Enter message");
scanf("%d%d%d%d",&data[0],&data[1],&data[2],&data[4]);
data[6]=data[0]^data[2]^data[4];
data[5]=data[0]^data[1]^data[4];
data[3]=data[0]^data[1]^data[2];
printf("Encoded bits\n");
for(i=0;i<7;i++)
{
printf("%d",data[i]);
}
printf("Enter the encoded bit\n");
for(i=0;i<7;i++)
{
scanf("%d",&rec[i]);
}
c1=rec[6]^rec[4]^rec[2]^rec[0];
c2=rec[5]^rec[4]^rec[1]^rec[0];
c3=rec[3]^rec[2]^rec[1]^rec[0];
c=c3*4+c2*2+c1;
if(c==0)
{
printf("No errors\n");
}
else
{
printf("There is an error:%d\n corrected bit is:",c);
}
if(rec[7-c]==0)
{
rec[7-c]=1;
}
else
{
rec[7-c]=0;
}
for(i=0;i<7;i++)
{
printf("\n%d",rec[i]);
}
}



