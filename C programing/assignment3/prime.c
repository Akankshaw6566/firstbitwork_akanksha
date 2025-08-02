// write a c program to check is no prime or not

#include<stdio.h>
void main(){
    int n=14;
    int i=2;
    int flag=0;
    while(i<=n){
        if(n%i==0){
             flag=1;
        }
        i++;
        break;
    }
    if(flag==0){
        printf("prime");
    }
    else{
        printf("not prime");
    }
}