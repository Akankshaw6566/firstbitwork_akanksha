//using function

#include<stdio.h>
void tri();
void main()
{
    tri();
}
void tri()
{
    int b,h;

    printf("enter the base of triangle");
    scanf("%d",&b);

    printf("enter the hight of triangle");
    scanf("%d",&h);

    float area=0.5*b*h;
    printf("the area of triangle is %f",area);

}