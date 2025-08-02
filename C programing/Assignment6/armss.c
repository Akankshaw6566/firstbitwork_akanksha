//using pointer 

#include<stdio.h>
void arm(int*);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    arm(&n);
}
void arm(int* n){
     int temp=*n;
     int count=0;
     while(temp>0){
        temp=temp/10;
        count++;
     }
     temp=*n;
     int sum=0;
     while(temp>0){
        int r=temp%10;
        int b=1;
        for(int i=1;i<=count;i++){
            b=b*r;
        }
        sum=sum+b;
        temp=temp/10;
     }
     if(*n==sum){
        printf("armstrong number");
     }
     else {
        printf("not armstrong number");
     }
     
  }
