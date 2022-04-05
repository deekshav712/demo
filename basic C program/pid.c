#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>
int main()
{
pid_t processid,parentid;
processid=getpid();
parentid=getppid();
printf("\nprocess id is %d",processid);
printf("\nparent id is %d",parentid);
return 0;
}
