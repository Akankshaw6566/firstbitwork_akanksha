#include<stdio.h>
void strupper(char[]);
void main(){
    
    char str[30]="Akanksha";
    strupper(str);

}
void strupper(char str[]){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&& str[i]<='z'){
            str[i]=str[i]-32;               // for uppercase
        }
        i++;

    }
    printf("%s",str);
}