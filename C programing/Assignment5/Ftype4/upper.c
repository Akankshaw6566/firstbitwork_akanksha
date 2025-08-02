//using type 4

#include<stdio.h>
char upper(char);
void main(){
    char a;
    printf("enter the character");
    scanf("%c",&a);
    char b=upper(a);
    if(b=='L')
    printf("lowercase");
    else
    printf("uppercase");
}
char upper(char a){
    if(a>='a' && a<='z'){
        return 'L';
    }
    else{
        return 'U';
    }
}