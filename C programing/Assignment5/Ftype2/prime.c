//using type 2

#include<stdio.h>
int prime();
void main(){
    int a=prime();
    if(a==0){
        printf("it is prime");
    }
    else{
        printf("not prime");
    }
}
int prime(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int i=2;
    int flag=0;

    while(i<n){
        if(n%i==0){
            flag=1;
            break;
        }
        i++;
    }
    return flag;
}