#include<stdio.h>
unsigned int factorial(unsigned in n)
{
if(n==0)
return 1;
return n* factorial(n-1)
}
int main()
{
int num=5;
printf("factorial of %d is%d",num,factorial(num));
return o;
}
