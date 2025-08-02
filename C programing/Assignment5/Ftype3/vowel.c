//using type 3

#include<stdio.h>
void vowel(char);
void main(){
    char a;
    printf("enter character");
    scanf("%c",&a);
    vowel(a);
}
void vowel(char a){
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'||a=='A'||a=='E'||a=='I'||a=='O'||a=='U'){
        printf("is it vowel");
    }
    else {
        printf("is it not vowel");
    }
}