//using type 3

#include<stdio.h>
void operator(int,int,char);
void main(){
    int x,y,res;
    printf("enter the two number");
    scanf("%d%d",&x,&y);
    char a;
    printf("choose the operator(+,-,/,*)");
    scanf("%c",&a);
    fflush(stdin);
     operator(x,y,a);
}
void operator(int x,int y,char a){
    int res;
    if(a=='+'){
        res=x+y;
    }
    else if(a=='-'){
        res=x-y;
    }
    else if(a=='*'){
        res=x*y;
    }
    else if(a=='/'){
        res=x/y;
    }
    else{
        res=x%y;
    }
    printf("the result is%d",res);
}