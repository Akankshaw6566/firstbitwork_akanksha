//using type 3

#include<stdio.h>
void evenodd();
void main(){
    int b;
    printf("enter the number");
    scanf("%d",&b);
    evenodd(b);
}
void evenodd(int b){
    if(b%2==0){
        printf("is it even number");
    }
    else{
        printf("is it odd number");
    }
}