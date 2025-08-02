//using type 3

#include<stdio.h>
void prime(int);
void main(){
    int a;
    prime(a);
}
void prime(int a){
    for(int a=2;a<=100;a++){
        int n;
        int i=2;
        int flag=0;
        while(i<a){
            if(a%i==0){
                flag=1;
                break;
            }
            i++;
        }
        if(flag==0){
            printf("%d\n",a);
        }
    }
}