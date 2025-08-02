//using pointer

#include<stdio.h>
void swap(int*,int*);
void main(){
    int no1=10,no2=20;
    swap(&no1,&no2);
    printf("%d %d",no1,no2);
}
void swap(int*x,int*y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
