// 10 write a c program to input marks of five subjects find totle marks and calculate th perscentage

#include<stdio.h>
void main(){
    float eng,phy,chem,math,comp;
    float total ,percentge;

    printf("enter the marks of five subjects");
    scanf("%f %f %f %f %f",&eng,&phy,&chem,&math,&comp);

    total= eng+phy+chem+math+comp;
    
    total =total/5;
   float  percentage =total/500*100;

    printf("total marks %2f",total);
    printf("percentage %2f",percentage);


}