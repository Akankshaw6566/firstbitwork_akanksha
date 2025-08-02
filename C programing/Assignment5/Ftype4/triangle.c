//using type 4

#include<stdio.h>
int triangle(int,int,int);
void main(){
    int a,b,c;
    printf("enter the three positive side");
    scanf("%d %d %d",&a,&b,&c);
    int k=triangle(a,b,c);
    if(k==1){
        printf("equilateral");
    }
    else if(k==2){
        printf("isoscalen");
    }
    else{
        printf("scalen");
    }
}
int triangle(int a,int b,int c){
    if(a==b&&b==c&&c==a){
        return 1;
    }
    else if(a==b || a==c || b==c){
        return 2;
    }
    else{
        return 3;
    }
}