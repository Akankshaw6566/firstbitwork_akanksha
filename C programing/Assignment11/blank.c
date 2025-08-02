//WAP to Take in a String and Replace Every Blank Space with special symbol.
#include<stdio.h>
#include<string.h>
void main(){
    char s[50]="hello world is beautyfull";
    
    
    for(int i=0;i<strlen(s);i++){
        if(s[i]==' '){
           s[i] = '&';  

        }

    }
    printf("%s",s);
}