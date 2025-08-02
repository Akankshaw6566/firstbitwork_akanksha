//using type 3

#include<stdio.h>
void digit(int);
void main(){
    int b;
    printf("enter the number");
    scanf("%d",&b);
    digit(b);
}
void digit(int b){
    int i;
    int sum;
    int a1=b%10;
    while(b>10){
      b=b/10;
    }
    sum=a1+b;
printf("the sum of number is %d",sum);
}
