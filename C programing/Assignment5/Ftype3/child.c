//using type 3

#include<stdio.h>
void age(int);
void main(){
    int a;
    printf("enter the age");
    scanf("%d",&age);
    age(a);
}
void age(int a){
    if(age<12){
        printf("child");
        }
        else if(age>=12 &&age<=19){
            printf("teenager");
        }
        else if(age>=20 &&age<59){
            printf("adult");
        }
        else if(age>=60){
            printf("senior");
        }
        else {
            printf("invalid");
        }
}