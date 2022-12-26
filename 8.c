/*8. Write a function to calculate the number of arrangements one can make from n items
and r selected at a time. (TSRS)*/
#include<stdio.h>
int chek(int digit,int num)
{
    int i;
    while(num!=0)
    {
        if (num%10==digit)
           return 1;
           else
           num=num/10;
    }
}
int main()
{
    if(chek(2,1234))
    printf("yes\n");
    else
    printf("no");
}