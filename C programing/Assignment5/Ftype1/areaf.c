//using function

#include<stdio.h>
void area();                                 //declaration
void main()
{
    area();                                //call
}
void area()                                       //defination
{
    int r=7;
    float p=3.14;
    float area=p*r*r;
    printf("area of circle is %f",area);
}