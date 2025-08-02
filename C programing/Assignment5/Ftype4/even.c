// using type 4

#include<stdio.h>
int evenodd(int);
void main(){
    int a;
    printf("enter the number");
    scanf("%d",&a);
    int x=evenodd(a);
    printf("%d",x);
}
int evenodd(int a){
    return a%2==0;
}
