// using type 4

#include<stdio.h>
int number(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    number(n);
}
int number(int n){
    for(int i=0;i<=n;i++){
    printf("%d\n",n);
}
return 0;
}
