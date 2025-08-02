#include<stdio.h>
void strrev(char[]);
void main(){
    char str[]="viraj";
    strrev(str);
}
void strrev(char str[]){
    int count=0;
    while(str[count]!='\0'){
        count++;
    }
    for(int i=count;i>=0;i--){
        printf("%c",str[i]);
    }
}