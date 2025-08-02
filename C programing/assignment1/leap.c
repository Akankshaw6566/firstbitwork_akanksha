// write a c program to check if it is leap year or not
#include<stdio.h>
void main(){
    int year=1900;
    if(year%4==0 &&year%100!=0 ||year%400==0)
    {
       printf("is leap year");
    }
    else{
        printf("is not leap year");
    }
}