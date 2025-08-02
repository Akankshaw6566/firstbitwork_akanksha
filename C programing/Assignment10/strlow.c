#include<stdio.h>
void strlow(char[]);
void main(){
    
    char str[30]="VIRAJ IS BEST";
    strlow(str);

}
void strlow(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&& str[i]<='Z'){
            str[i]=str[i]+32;                 // for lowercase
        }
        i++;

    }
    printf("%s",str);
}