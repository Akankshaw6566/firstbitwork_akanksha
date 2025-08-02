//using type 3

#include<stdio.h>
void strong(int);
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    strong(a);
}
void strong(int a){
    int temp;
    int sum=0;
    temp=a;
    int rem;
    while(a>0){
       rem=a%10;
       int fact=1;
       for(int i=1;i<=rem;i++){
        fact=fact*i;
       }
       sum=sum+fact;
       a=a/10;
    }
    if(sum==temp){
        printf("strong number");
    }
    else{
        printf("not strong number");
    }
}