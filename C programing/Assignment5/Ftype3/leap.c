//using type 3

#include<stdio.h>
void leap(int);
void main(){
    int yr;
    printf("enter the yera\n");
    scanf("%d",&yr);
    leap(yr);
}
void leap(int yr){
    if(yr%4==0 || yr%400==0 && yr%100!=0){
        printf("leap year");
    }
    else{
        printf("not leap year");
    }
}