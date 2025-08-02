//using type 3

#include<stdio.h>
void basic(float);
void main(){
    int b;
    printf("enter the basic");
    scanf("%d",&b);
    basic(b);
}
void basic(float b){
    float da=0.10;
    float ta=0.20;
    float hr=0.25;

    if(b<=5000){
        da=0.1*b;
        ta=0.2*b;
        hr=0.25*b;
    }
    else{
        da=0.15*b;
        ta=0.25*b;
        hr=0.3*b;
    }
    float basic=da+ta+hr+b;
    printf("total salary is %f\n",basic);
}