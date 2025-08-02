// write a code to check number is armstrong or not

#include<stdio.h>
void main(){
    int n,temp;
    int sum=0;
    printf("enter the number");
    scanf("%d",&n);
    temp=n;
    while(n>0){
        int r=n%10;
        sum=sum+r*r*r;
        n=n/10;
    }
    if(sum==temp){
        printf("armstrong");
    }
    else{
        printf("not armstrong");
    }
}