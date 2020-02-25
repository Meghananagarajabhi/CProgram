#include <stdio.h>
int main()
{
int a,b;
printf("enter the values of a and b");
scanf("%d%d" ,&a,&b);
if(a+b)
{
printf("sum of a and b\n");
}
else
if(a-b)
{
printf("difference of a and b\n");
}
else
if(a*b)
{
printf("product of a and b\n");
}
else
if(a/b)
{
printf("division of a and b\n");
}
}
