// using type 2

#include<stdio.h>
char conversion();
void main()
{
    char p=conversion();
    printf("%c",p);
}
char ch;
char conversion(){
    printf("enter any character");
    scanf("%c",ch);
    if(ch>='a'&& ch<='z'){
    ch=ch-3;
    return ch;
}
else if(ch>'A' && ch<='Z'){
    ch=ch+32;
    return ch;
}
else if(ch>='0' && ch<='9'){
    return ch;
}
}