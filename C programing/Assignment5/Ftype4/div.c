//using type 4

#include<stdio.h>
int div(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int p=div(n);
    if(p==35){
       printf("divisible by 3 and 5");
    }
    else if(p==5){
        printf("divisible by 5 ");
    }
    else if(p==3){
        printf("divisible by 3");
    }
    else{
        printf(" ");
    }
}
int div(int n){
    if(n%3==0 && n%5==0){
        return 35;
    }
    else if(n%5==0){
        return 5;
    }
    else if(n%3==0){
        return 3;
    }
    else{
        return 0;
    }
}