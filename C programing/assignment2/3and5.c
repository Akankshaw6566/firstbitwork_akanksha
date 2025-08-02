// write a code to  check is number divisible by 3 and 5

#include<stdio.h>
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    if(n%3==0 && n%5==0){
        printf("divisibe by both");
    }
    else if(n%3==0){
        printf("divisible by 3 but not 5");
    }
    else if(n%5==0){
        printf("divisible by 5 but not 3");
    }
    else{
        printf("divisible by none");
    }
}