// using pointer prime number

#include<stdio.h>
void prime(int*n);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    prime(&n);
}
void prime(int*n){
    
        int i=2;
        int flag=0;
        while(i<*n){
            if(*n%i==0){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0){
            printf("its prime number");
        }
        else {
            printf("not prime number");
        }
    }
