//using type 3

#include<stdio.h>
void strong(int);
void main(){
    int b;
    strong(b);
}
void strong(int b){
    for(int a=1;a<=50;a++){
        int b=a;
        int sum=0;
        int rem;
        while(b>0){
            rem=b%10;
            int fact=1;
            for(int i=1;i<=rem;i++){
                fact=fact*i;
            }
            sum=sum+fact;
            b=b/10;
        }
        if(sum==a){
            printf("%d\n",a);
        }
    }
}