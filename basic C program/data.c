#include<stdio.h>
#include<string.h>
int main()
{
int i=0,count=0;
char databits[80];
printf("enter databits\n");
scanf("%s" ,databits);
printf("databits before stuffing %s\n",databits);
printf("after stuffing\n");
for(i=0;i<strlen(databits);i++)
{
if(databits[i]=='1')
{
count++;
}
else
count=0;
printf("%c",databits[i]);
if(count==5)
{
printf("0");
count=0;
}
}
return 0;
}

