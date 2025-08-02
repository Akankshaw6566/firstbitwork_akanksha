//using type 3

#include<stdio.h>
void range(int,int);
void main(){
    int start;
    int end;
    printf("enter the start");
    scanf("%d",&start);
    printf("enter the end");
    scanf("%d",&end);
    range(start,end);
}
void range(int start,int end){
    int sum=0;
    for(start=1;start<=end;start++){
        sum=sum+start;
    }
    printf("the sum of number is %d",sum);
}
