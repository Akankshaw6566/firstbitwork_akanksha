//using type 4

#include<stdio.h>
int sum(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=sum(n);
    printf("%d",a);
}
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    return sum;
}
