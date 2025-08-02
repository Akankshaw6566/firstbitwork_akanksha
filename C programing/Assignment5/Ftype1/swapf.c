//using function

#include<stdio.h>
void swap();
void main()
{
    swap();
}
void swap()
{
    int a=28;
    int b=35;
    int temp=a;
    a=b;
    b=temp;
    printf("the swap number are %d,%d",a,b);
}