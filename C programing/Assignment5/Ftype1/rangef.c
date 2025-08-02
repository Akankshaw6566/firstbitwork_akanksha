//using function

#include<stdio.h>
void ran();
void main()
{
    ran();
}
void ran()
{
    int sum=0;
    int n;
    int i;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("the sum of number is %d",sum);
}