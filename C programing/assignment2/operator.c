// write a c program to form user and operator based on oerform the desired operation
#include<stdio.h>
void main(){
    int a,b ;
    printf("enter the number");
    scanf("%d%d",&a,&b);
    char c,res;
    printf("enetr the operator (+,-,%,/,*)");
    // fflush(stdin);
    scanf(" %c",&c);

    if(c=='+'){
        res=a+b;
    
    }
    else if(c=='-'){
        res=a-b;
        
    }
    else if(c=='*'){
        res=a*b;
        
    }
    else if(c=='%'){
        res=a%b;
        
    }
    else if(c=='/'){
        res=a/b;
        
    }
    

}