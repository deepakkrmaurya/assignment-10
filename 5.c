/*5. Write a function to print first N odd natural numbers. (TSRN)*/
#include<stdio.h>
 odd(int n)
{
    int i,num;
    for ( i = 0; i < n; i++)
    {
       num=1+2*i ;
       printf("%d\n",num);
    }
    return 0;
} 
 int main()
{
int n;
printf("inter the number");
scanf("%d",&n);
odd(n);
}