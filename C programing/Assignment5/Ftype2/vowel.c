//using type 2

#include<stdio.h>
char vowel();
void main(){
    char g=vowel();
    if(g=='v')
    printf("its vowel");
    else 
    printf("its consonant");

}
char vowel(){
    char p;
    printf("enter character");
    scanf("%c",&p);

    if(p=='a' || p=='e' || p=='i' || p=='o' || p=='u' || p=='A' || p=='E' || p=='I' || p=='o' || p=='U'){
        return 'v';
    }
    else{
        return 'c';
    }
}