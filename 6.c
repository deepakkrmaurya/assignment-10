/*6. Write a function to calculate the factorial of a number. (TSRS)*/
#include<stdio.h>
int factorial(int n)
{
int i,f=1;
for ( i = 1; i <=n; i++)
{
      f=f*i;
}
return f;
}
int main()
{
    int n,fact;
    printf("inter the number");
    scanf("%d",&n);
    fact=factorial(n);
    printf("factorial=%d",fact);
    return 0;
}