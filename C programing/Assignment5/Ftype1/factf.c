//using function

#include<stdio.h>
void fact();
void main()
{
    fact();
}
void fact()
{
    int n;
    int fact=1;
    printf("enter the number");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the factorial of number is %d",fact);
}