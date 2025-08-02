//9 write a c program to input the base and height of a triangle and calculate its area

#include<stdio.h>
void main(){
    int b,h;

    printf("enter the base of triangle");
    scanf("%d",&b);

    printf("enter the hight of triangle");
    scanf("%d",&h);

    float area=0.5*b*h;
    printf("the area of triangle is %f",area);

}