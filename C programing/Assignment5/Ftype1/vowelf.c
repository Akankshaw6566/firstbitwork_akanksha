//using function

#include<stdio.h>
void vowel();
void main()
{
    vowel();
}
void vowel()
{
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