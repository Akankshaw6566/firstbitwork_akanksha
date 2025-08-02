//using function

#include<stdio.h>
void tab();
void main()
{
    tab();
}
void tab()
{
    int n;
    printf("enter the number");
    scanf("%d",&n); 
    for(int i=1;i<=10;i++){
        printf("%d\n",n*i);
    }
}