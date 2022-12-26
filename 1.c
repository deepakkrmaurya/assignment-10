/*1. Write a function to calculate the area of a circle. (TSRS)*/
#include<stdio.h>
 float area(float radious)
 {
   return 3.14*radious*radious;
 }
 int main()
 {
   float radious,result;
   printf("inter a radious");
   scanf("%f",&radious);
    result=area(radious);
     printf("area=%0.2f",result);
     return 0;
 }