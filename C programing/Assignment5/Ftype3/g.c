//using type 3

#include<stdio.h>
void greatest(int,int,int);
void main(){
    int a,b,x;
    printf("enter the positive side");
    scanf("%d %d %d",&a,&b,&x);
    greatest(a, b,x);
}
void greatest(int a, int b,int x){
        if(a>b){
           if(a>x){
            printf("%d",a);
        }
        else {
            printf("%d",x);
        }
}
else{
     if(b>x){
        printf("%d",b);
     } 
     else{
        printf("%d",x);
     }
}
}