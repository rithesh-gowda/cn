#include<stdio.h>
#include<stdlib.h>
int cost[15][15];
int n,mincost,v1=0,v2=0;
void findmin()
{
int edgewt=99,i,j;
for(i=0;i<n;i++){
for(j=0;j<n;j++)
{
if(cost[i][j]>0 && cost[i][j]<edgewt)
{
edgewt=cost[i][j];
v1=i;
v2=j;
}
}
}
}
void kruskal()
{
int i,edgewt;
int root[n];
for(i=0;i<n;i++)
root[i]=i;




void main()
{
int i,j;
printf("enter the number of vertices");
scanf("%d",&n);
printf("Enter the undirected graph as adjacency matrix");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&cost[i][j]);
}
}
for(i=0;i<n;i++){
for(j=0;j<n;j++)){
printf("%d\t",cost[i][j]);
}
}
printf("\n");
}
kruskal()
}


