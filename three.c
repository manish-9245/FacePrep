#include<stdio.h>
#include<string.h>
int main(){
 {
int a[50],i,j,k, count = 0, s;
scanf("%d",&s);
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s;i++)
{
    for(j = i+1; j < s; j++)
    {
        if(a[i] == a[j])
        {
            for(k = j; k <s; k++)
            {
                a[k] = a[k+1];
            }
            j--;
            s--;
        }
    }
}
for(i=0;i<s;i++)
{
printf("%d ",a[i]);
}
}
}