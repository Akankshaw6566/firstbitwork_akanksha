//using type 4

#include<stdio.h>
int vote(int);
void main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    int a=vote(age);
    if(a==1)
    printf("eligible to vote");
    else
    printf("not eligible to vote");
}
int vote(int b){
    if(b>=18){
        return 1;
    }
    else{
        return 0;
    }
}