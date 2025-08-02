//using type 2

#include<stdio.h>
int discount();
void main(){
    int a=discount();
    if(a==1){
        printf("you got 20 discount");
    }
    else if(a==2){
        printf("you got 10 discount");
    }
    else if(a==3){
        printf("you got 15 discount");
    }
    else{
        printf("no discount");
    }
}
int discount(){
    int price;
    char response;
    printf("if u r student then enter Y or no then enter N");
    scanf("%c",&response);

    printf("enter the price");
    scanf("%d",&price);

    if(response=='Y'){
        if(price>=500){
            return 1;
        }
        else{
            return 2;
        }
    }
    else{
        if(price>=600){
            return 3;
        }
        else{
            return 0;
        }
    }
}