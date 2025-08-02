//using type 4

#include<stdio.h>
int digit(int);
void main(){
    int n;
    printf("enter the nuumber");
    scanf("%d",&n);
    int a=digit(n);
    printf("%d",a);
}
int digit(int n){
    int i;
    int sum;
    int r1=n%10;
    while(n>10){
        n=n/10;
    }
    sum=r1+n;
    return sum;
}