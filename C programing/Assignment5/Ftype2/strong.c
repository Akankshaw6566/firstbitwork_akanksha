//using type 2

#include<stdio.h>
int strong();
void main(){
    int strong();
    if(1==1){
        printf("is strong number");
    }
    else{
        printf("is not strong number");
    }
}
int strong(){
    int n;
    int temp;
    printf("enter the number");
    scanf("%d",&n);
    
    int sum=0;
    temp=n;
    int rem;

    while(n>0){
        rem=n%10;
        int fact=1;

        for(int i=1; i<=rem; i++){
            fact=fact*i;
        }
        sum=sum+fact;
        n=n/10;
    }
    if(sum==temp){
        return 1;
    }
    else{
        return 0;
    }
    
}
