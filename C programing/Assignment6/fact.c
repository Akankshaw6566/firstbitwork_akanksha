// using pointer

#include<stdio.h>
void fact(int*);
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    fact(&a);
}
void fact(int* a){
    int fact=1;
    for(int i=1;i<=*a;i++){
        fact=fact*i;
    }
    printf("the factorial is %d",fact);
}