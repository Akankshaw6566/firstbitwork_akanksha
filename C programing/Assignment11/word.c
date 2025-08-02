//WAP to Calculate the Number of Words Present in a String 
#include<stdio.h>
void main(){
    char s[]=" this is random string ok";
    int i=0;
    int count=0;
    while(s[i]!='\0'){  
            if(s[i]==' '){
               count++;
            }
            i++;
        }
        printf("%d",count);
    
}