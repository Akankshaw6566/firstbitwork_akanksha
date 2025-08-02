//using type 2

#include<stdio.h>
int div();
void main(){
    int a=div();
    if(a==1){
        printf("divisible by both");
    }
    else if(a==2){
        printf("divisible by 3 but not 5");
    }
    else if(a==3){
        printf("divisible by 5 but not 3");
    }
    else{
        printf("divisible by none");
    }
}
int div(){
    int n;
    printf("enterr the number");
    scanf("%d",&n);
    if (n%3==0 && n%5==0){
        return 1;
    }
    else if(n%3==0){
        return 2;
    }
    else if(n%5==0){
        return 3;
    }
    else {
        return 0;
    }
}