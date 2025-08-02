//using type 3

#include<stdio.h>
void fact(int);
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    fact(a);
}
void fact(int a){
    int f=1;
    for(int i=1;i<=a;i++){
        f=f*i;
    }
    printf("the factorial is %d",f);
}