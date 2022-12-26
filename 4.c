/*4. Write a function to print first N natural numbers (TSRN)*/
#include<stdio.h>
void natural(int n)
{
    int i,num;
    for ( i = 0; i <n; i++)
    {
          num=0+i;
          printf("%d\n",num);
    }
    return 0;
}
int main()
{
    int n;
    printf("inter the number");
    scanf("%d",&n);
    natural(n);
    return 0;
}