// 4 write a c program to swap two numbers using temporary third variable

#include<stdio.h>
int main(){
    int a=28;
    int b=35;
    int temp=a;
    a=b;
    b=temp;
    printf("the swap number are %d,%d",a,b);
}