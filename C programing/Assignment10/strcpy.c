#include<stdio.h>
void strcpy(char[],char[]);
void main(){
    char str1[30]="viraj wadekar";
    char str2[20];
    strcpy(str1,str2);
}
void strcpy(char str1[],char str2[]){
    int i=0;
    while(str1[i]!='\0'){
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    printf("%s",str2);
}