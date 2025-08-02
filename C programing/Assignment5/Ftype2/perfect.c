//using type 2

#include<stdio.h>
int perfect();
void main(){
    int a=perfect();
    if(a==1){
        printf("perfect number");
    }
    else{
        printf("not perfect number");
    }
}
int perfect(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
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
        return 2;
    }
}