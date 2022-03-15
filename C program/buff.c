#include<stdio.h>
void main()
{
int incoming,outgoing,buff_size,store=0,n;
printf("Number of packets:");
scanf("%d",&n);
printf("\noutgoing rate:");
scanf("%d",&outgoing);
printf("\nbuffer size:");
scanf("%d",&buff_size);

while(n!=0)
{
printf("\nincoming packet is:");
scanf("%d",&incoming);
if(incoming<=(buff_size-store))
{
store+=incoming;
printf("\nbucket buffersize :%d out of :%d",store,buff_size);

}
else
{
printf("\npacket is dropped :%d",(incoming-(buff_size-store)));
store=buff_size;
}
store=store-outgoing;
printf("\nstored valued is :%d",store);
n--;
}
}
