// using type 4

#include<stdio.h>
int perfect(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=perfect(n);
    if(a==1)
    printf("perfect number");
    else
    printf("not perfect number");
}
int perfect(int n){
    int sum=0;
    int i=1;
    while(i<=n/2){
        if(n%i==0){
            sum=sum+i;
        }
        i++;
    }
    if(n==sum){
        return 1;
    }
    else{
        return 0;
    }
}