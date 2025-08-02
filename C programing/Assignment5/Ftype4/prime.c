//using type 4

#include<stdio.h>
int prime(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int a=prime(n);
    if(a==1)
    printf("prime number");
    else
    printf("not prime number");
}
int prime(int n){
         int flag=0;
         int i=2;
         while(i<n){
            if(n%i==0){
                flag=1;
                break;
            }
            i++;
         }
         if(flag==0){
            return 1;
         }
         else{
            return 0;
         }
}