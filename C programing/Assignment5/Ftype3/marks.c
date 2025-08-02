//using type 3

#include<stdio.h>
void marks(int);
void main(){
    int m;
    printf("enter the number");
    scanf("%d",&m);
    marks(m);
}
void marks(int m){
    if(m>75){
        m="distinction";
    }
    else if(m>65){
        m="first class";
    }
    else if(m>55){
        m="second class";
    }
    else if(m>=40){
        m="pass class";
    }
    else{
        m="fail";
    }
    printf("m");
}