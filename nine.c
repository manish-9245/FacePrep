#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
printf("Please enter the number of nodes in the graph\n");
int n;
scanf("%d",&n);
int mt[n][n];
int m,i,j,k,a,b,c;
char dir[4];
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
mt[i][j]=0;
}
printf("Please enter the number of edges in the graph\n");
scanf("%d",&m);
printf("Is the graph directed ");
scanf("%s",dir);
for(k=0;k<m;k++)
{
printf("Enter the start node, end node and weight of edge no %d\n",k);
scanf("%d%d%d",&a,&b,&c);
mt[a][b]=c;
if(strcmp(dir,"no")==0)
mt[b][a]=c;
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
printf("%d ",mt[i][j]);
}
printf("\n");
}
}