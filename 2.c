/*2. Write a function to calculate simple interest. (TSRS)*/
/*A = Total amount after the given time period

P = Principal amount or the initial loan amount

R = Rate of interest (per annum)

T = Time (in years)*/
#include<stdio.h>
 int simple(int p,int t,int r)
{    int si;
    si=p*t*r/100;
    return si;

}
int main()
{
    int p,t,r,si;
    printf("inter the principel amount ");
    scanf("%d",&p);
    printf("inter the rate of interest");
    scanf("%d",&r);
    printf("inter the time duration ");
    scanf("%d",&t);
    si=simple(p,t,r);
    printf("simple interest=%d",si);
    return 0;
}
