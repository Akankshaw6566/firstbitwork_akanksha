//using pointer calculate the sum of numbers in the given range

#include<stdio.h>
void range(int*start,int*end);               // declaration
void main(){
    int start;
    int end;

    printf("enter the start");
    scanf("%d",&start);
    printf("enter the end");
    scanf("%d",&end);
    range(&start,&end);
}
void range(int (*start),int (*end)){
    int sum=0;
    for( int i=*start;i<=*end;i++){
        sum=sum+i;
    }
    printf("the sum of number is %d",sum);
}

