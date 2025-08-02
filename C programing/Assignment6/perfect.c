//using pointer 

#include<stdio.h>
void perfect(int*);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    perfect(&n);
}
void perfect(int* n){
        int i=1;
        int sum=0;
        while(i<=*n/2){
            if(*n%i==0){
                sum=sum+i;
            }
            i++;
        }
        if(sum==*n){
            printf("perfect number");
        }
        else{
            printf("not perfect number");
        }
    }
