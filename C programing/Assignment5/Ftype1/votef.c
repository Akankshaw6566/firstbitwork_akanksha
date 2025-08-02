//using function

#include<stdio.h>
void vote();
void main()
{
    vote();
}
void vote()
{
    int age=17;
    if(age>=18)
    {
       printf("valid to drive");
    }
    else
    {
        printf("invalid to drive");
    }
}