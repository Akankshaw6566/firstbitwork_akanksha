// add the (first and last) digit of given number 12345 1+5

#include<stdio.h>
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    int i;
    int sum;
    int r=n%10;

    while(n>10){
        n=n/10;
    }
    sum=r+n;
    printf("the sum of number is %d",sum);
}