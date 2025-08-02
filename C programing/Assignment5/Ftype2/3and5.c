//using type 3

#include<stdio.h>
void div(int);
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    div(a);
}
void div(int a){
    if(a%3==0 && a%5==0 ){
        printf("divisible by both");
    }
    else if(a%3==0){
        printf("divisible by 3 but not by 5");
    }
    else if(a%5==0){
        printf("divisible by 5 but not by 3");
    }
    else{
        printf("divisible by none");
    }
}