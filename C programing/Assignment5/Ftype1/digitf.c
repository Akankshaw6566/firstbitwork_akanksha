//using function

#include<stdio.h>
void digit();
void main()
{
    digit();
}
void digit()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);

    int i;
    int sum;
    int r=n%10;

    while(n>10){
        n=n/10;
    }
    sum=r+n;
    printf("the sum of number is %d",sum);
}