// using function

#include<stdio.h>
void input();
void main()
{
    input();

}
void input()
{
    int a=10;
    int b=20;
    int c=33;
    int d=40;
    int e=50;
    double avg=(a+b+c+d+e)/5;
    printf("the average of 5 numbers is %lf",avg);
}