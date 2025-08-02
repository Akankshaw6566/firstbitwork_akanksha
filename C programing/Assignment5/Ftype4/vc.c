// using type 4

#include<stdio.h>
int vowel(char);
int main(){
    char a;
    printf("enter the character");
    scanf("%c",&a);
    int c=vowel(a);
    if(c==1){
    printf("its vowel");
    }
    else{
        printf("its consonent");
    }
    return 2;
}
int vowel(char a){
    if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u'){
        return 1;
    }
    else{
        return 0;
    }
}