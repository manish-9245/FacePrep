#include <stdio.h>
int decimal_binary(int n)
{
if (n==0)
return 0;
else
return ((n%2)+10*decimal_binary(n/2));
}
void main()
{
int no;
scanf("%d",&no);
printf("%d",decimal_binary(no));
}