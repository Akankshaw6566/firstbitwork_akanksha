//using type 2

#include<stdio.h>
int factorial();
void main(){
    int a=factorial();
    printf("%d",a);
}
int factorial(){
    int n;
    int fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}