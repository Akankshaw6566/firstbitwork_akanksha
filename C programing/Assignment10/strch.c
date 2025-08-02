#include<stdio.h>
char * strch(char*,char);
void main(){
    char str[]="Viraj";
    char v='d';
    char *res=strch(str, v);
    if(res!=NULL){
         printf(" found character %c in string",*res);

    }
    else{
        printf("not found");
    }
   


}
char* strch(char* str,char v){
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==v){
           return &str[i];

        }

        i++;

    }
    return NULL;

}