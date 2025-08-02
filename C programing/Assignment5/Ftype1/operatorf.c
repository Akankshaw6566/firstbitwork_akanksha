//using function

#include<stdio.h>
void operator();
void main()
{
    operator();
}
void operator()
{
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