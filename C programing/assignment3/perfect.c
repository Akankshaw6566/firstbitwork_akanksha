// write a code to check is number perfect or not

#include<stdio.h>
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n/2){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(n==sum){
        printf("is perfect numner");
    }
    else{
        printf("is not perfect number");
    }
}