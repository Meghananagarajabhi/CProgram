#include<stdio.h>
int main()
{
int a,b;
printf("enter the value of a & b: \n");
scanf("%d%d",&a,&b);
if(a>b)
{
printf("if a is greater than b:\n");
}
else
if(a<b)
{
printf("if a is lesser than b:\n");
}
else
if(a>=b)
{
printf("if a is greater than or equal to b:\n");
}
else
if(a<=b)
{
printf("if a is lesser than or equal to b:\n");
}
}
