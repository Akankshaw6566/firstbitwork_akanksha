// using type 3

#include<stdio.h>
void perfect(int);
void main(){
    int a;
    perfect(a);
}
void perfect(int a){
    for(int n=1;n<=1000;n++){
        int i=1;
        int sum=0;
        while(i<=n/2){
            if(n%i==0){
                sum=sum+i;
            }
            i++;
        }
        if(sum==n){
            printf("%d\n" ,n);
        }
    }
}