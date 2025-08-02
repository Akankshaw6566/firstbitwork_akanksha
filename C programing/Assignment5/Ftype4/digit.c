//using type 4

#include<stdio.h>
int digit(int);
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int b=digit(a);
    printf("%d",b);
}
int digit(int a){
    int i;
    int sum;
    int r1=a%10;
    while(a>10){
        a=a/10;
    }
    sum=r1+a;
    return sum;
}