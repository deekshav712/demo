#include<stdio.h>
#include<string.h>
int main()
{
char a[100],b[100];
printf("enter the first string\n");
scanf("%s",a);
printf("enter the second string\n");
scanf("%s",b);
strcat(a,b);
printf("string obtained on concatenation is %s\n",a);
return 0;
}
