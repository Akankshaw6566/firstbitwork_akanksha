// write a c program to check give character is vowel or consonent
#include<stdio.h>
void main(){
    char c;
    printf("enter a character");
    scanf(" %c",&c);
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='A' || c=='E' ||  c=='I' || c=='O' || c=='U'){
        printf("its vowel");
    }
    else{
        printf("consonant");
    }
}