// write a c program to check is character is upper case or lower case
#include<stdio.h>
void main(){
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