//using type 4

#include<stdio.h>
int fact(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int l=fact(n);
    printf("%d",l);
}
int fact(int n){
    int fact=1;
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}