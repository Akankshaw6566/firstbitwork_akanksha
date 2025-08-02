//using type 4

#include<stdio.h>
int operat(int,int,char);
void main(){
    int n1,n2;
    printf("enter the number");
    scanf("%d %d",&n1,&n2);
    char c;
    printf("choose the operator(+,-,*,/)");
    scanf("%c",&c);
    int b=operat(n1,n2,c);
    if(c=='+' || c=='*' || c=='-' || c=='/')
    printf("%d",b);
    else
    printf("invalid operator");
}
int operat(int n1,int n2,char c){
    if(c=='+')
    return n1+n2;
    if(c=='-')
    return n1-n2;
    if(c=='*')
    return n1*n2;
    if(c=='/')
    return n1/n2;
    else
    return 0;
}