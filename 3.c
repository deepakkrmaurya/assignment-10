/*3. Write a function to check whether a given number is even or odd. Return 1 if the
number is even, otherwise return 0. (TSRS)*/
#include<stdio.h>
int evenodd(int n)
{
    if(n%2==0)
    return 1;
    else
    return 0;

}

int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    evenodd(n);
    
    if(evenodd(n)==1)
    {
      printf("even");
    }
    else 
    printf("odd");
    return 0;
    
}