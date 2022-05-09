BEGIN{
coutn=0
sent1=0;
sent=2
received=0;
}
{
if($1 == "d")
{
count++;
}
else if($1=="+" && $3==1 && $4==2)
{
sent1++;
}
else if($1=="+" && $3==0 && $4==2)
{
sent2++;
}
else if($1=="r" && $3==2 && $4==3)
{
received++;
}
}
END{
printf"\nNumber of packets dropped is:%d\n",count;
printf"\npackets sent from source node 1 is:%d\n",sent1;
printf"\npackets sent from source node 1 is:%d\n",sent2;
printf"\npackets Recived:%d",received;sent=sent1+sent2;
printf"\nPacket delivery ratio:%2f\n",(received/sent)*100;
}
