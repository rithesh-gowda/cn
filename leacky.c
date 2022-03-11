#include<stdio.h>
void main()
{
int incomming, outgoing, n, buff_size, store=0;
printf("\nEnter value of n:");
scanf("%d",&n);
printf("\nEnter outgoing and buffer size:");
scanf("%d%d",&outgoing,&buff_size);
while(n!=0)
{
printf("\nIncomming packets:");
scanf("%d",&incomming);
if(incomming <= (buff_size-store))
store += incomming;
else
{
printf("\npacket is dropped is:%d",incomming-(buff_size-store));
store=buff_size;
}
printf("\nbuffer size %d out of %d\n",store,buff_size);

store = store - outgoing;
printf("after outgoing %d packets left in buffer %d",store,buff_size);
n--;
}
}
