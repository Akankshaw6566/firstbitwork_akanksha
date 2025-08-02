//using function

#include<stdio.h>
void leap();
void main()
{
    leap();
}
void leap()
{
    int year=1900;
    if(year%4==0 &&year%100!=0 ||year%400==0)
    {
       printf("is leap year");
    }
    else{
        printf("is not leap year");
    }
}