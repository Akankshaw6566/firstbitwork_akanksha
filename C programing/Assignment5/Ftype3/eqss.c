//using type 3

#include<stdio.h>
void triangle(int,int,int);
void main(){
    int a , b,c;
    printf("enter the three posotive side");
    scanf("%d %d %d",&a,&b,&c);
    triangle(a,b,c);
}
void triangle(int a,int b,int c){
    if(a==b && b==c && c==a){
        printf("its equilateral triangle");
    }
    else if(a==b || b==c || c==a){
        printf("its iscosclen triangle");
    }
    else{
        printf("its scalen triangle");
    }
}