//using function

#include<stdio.h>
void upper();
void main()
{
    upper();
}
void upper()
{
    char ch;
    printf("enter any character");
    scanf(" %c",&ch);

    if(ch>='a'&& ch<='z'){
        ch=ch-32;
        printf("%c",ch);
    }

    else if(ch>='A'&& ch<='Z'){
        ch=ch+32;
        printf("%c",ch);
    }
    else {
        printf("invaild");
    }
    
}