//using type 2

#include<stdio.h>
int sum();
void main(){
    int a=sum();
    printf("the sum of number is %d",a);
}
int sum (){
    int sum=0;
    int start;
    int end;
    printf("enter the start");
    scanf("%d",&start);
    printf("enter the end");
    scanf("%d",&end);

    for(start=1;start<=end;start++){
        sum=sum+start;
    }
    return sum;
}