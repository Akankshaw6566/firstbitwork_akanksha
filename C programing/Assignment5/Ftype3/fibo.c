// using type 3

#include<stdio.h>
void fibo(int);
void main(){
    int c;
    printf("enter the number");
    scanf("%d",&c);
    fibo(c);
}
void fibo(int c){
    int a=0;
    int b=1;
     for(int i=2;i<c;i++){
        int c=a+b;
        printf("%d\t",c);
        a=b;
        b=c;
     }
}