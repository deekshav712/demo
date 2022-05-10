#include<stdio.h>
#include<stdlib.h>
  int d[10],n=5,p[10],s;
 int cost[6][6]={
{0,99,99,7,99},
{3,0,4,99,99},
{99,99,0,99,6},
{99,2,5,0,99},
{99,99,99,4,0}};
void diji(int s)
{
  int min,i,j,u,v;
  int ss[10];
  for(i=0;i<n;i++)
   {
     d[i]=cost[s][i];
      ss[i]=0;
      p[i]=s;
   }
      ss[s]=1;
  for(i=1;i<n;i++)
  {
   min=99;
   u=-1;
  for(j=0;j<n;j++)
  {
   if(ss[j]==0)
    {
      if(d[j]<min)
       {
         min=d[j];
         u=j;
       }
     }
   }
   if(u==-1)
   return;
   ss[u]=1;
    for(v=0;v<n;v++)
    {
     if(ss[v]==0)
      {
       if(d[u]+cost[u][v]<d[v])
        {
         d[v]=d[u]+cost[u][v];
         p[v]=u;
        }
      }
    }
   }    
}
void path(int s,int dest)
{
 int i;
 i=dest;
while(i!=s)
 {
   printf("%d<--",i);
   i=p[i];
 }
printf("%d=%d",i,d[dest]);
}


void main()
{
int i,j;
 printf("adgecency matrix\n");
  for(i=0;i<n;i++)
   {
    for(j=0;j<n;j++)
     { 
        printf("\t%d",cost[i][j]);
         }
printf("\n");
   }
printf("enter the source vertex\n");
 scanf("%d",&s);
 diji(s);
printf("the shortest path is\n");
 for(j=0;j<n;j++)
   {
    if(d[j]==99)
    printf("is not reachable from %d-->%d",s,i);
    else
    path(s,j);
    printf("\n");
   }
}
