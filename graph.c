#include<stdio.h>
#include<stdlib.h>
int cost[15][15];
int n,mincost,v1=0,v2=0;
void kruskal();
void dounion(int root[],int v1,int v2)
{
int temp=root[v2];
for(int i=0;i<n;i++)
{
if(root[i]==temp)
root[i]=root[v1];
}
}

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
int root[n+1];
for(i=0;i<n;i++)
root[i]=i;
printf("\n Edge of mini cost spanning tree are");
i=0;
while(i!=n-1)
{
findmin();
edgewt=cost[v1][v2];
cost[v1][v2]=cost[v1][v2]=0;
if(root[v1]!=root[v2])
{
printf("\n(%d%d)",v1,v2);
dounion(root,v1,v2);
mincost += edgewt;
i++;
}
}
printf("cost of mincost spannig tree:%d\n",mincost);
}
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
for(j=0;j<n;j++){
printf("%d\t",cost[i][j]);
}

printf("\n");
}
kruskal();
}


