//using type 3

#include<stdio.h>
void vote(int);
void main(){
    int age;
    printf("enter the age");
    scanf("%d",age);
    vote(age);
}
void vote(int age){
    if(age>=18){
        printf("eligible to vote");
    }
    else {
        printf("not eligible to vote");
    }
}