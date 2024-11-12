#include<stdio.h>
int main()
{
   int year,true,false;
   printf("Enter the year:\n");
   scanf("%d",&year);
   if(year%4==0 && year %100!=0)
   {
    printf("%d is a leap year");
    return true;
    }
    else
   {
    printf("%d is not a leap year");
    return false;
   }
}