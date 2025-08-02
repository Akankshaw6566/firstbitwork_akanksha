//using function
#include<stdio.h>
void evenodd();           // function declaration
void main()
{
    evenodd();           // function call
}
void evenodd(){           // function defination
    int a=20;
    if(a%2==0)
    {
        printf("its even number");
    }
    else
    {
        printf("it odd number");    
    }
}