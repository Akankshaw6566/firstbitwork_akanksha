//using function

#include<stdio.h>
void dis();
void main()
{
    dis();
}
void dis()
{
    int price;
    char response;
    printf("if you are student then enetr 'Y' or not then enetr 'N':");
    scanf("%c",&response);

    printf("enetr the price");
    scanf("%d",&price);
    
    if(response=='Y'){
        if(price>=500){
            printf("you got 20% discount");
        }
        else{
            printf("you got 10% discount");
        }
    }
    else{
        if(price>=600){
            printf("you got 15% discount");
        }
        else{
            printf("no discount");
        }
    }
}