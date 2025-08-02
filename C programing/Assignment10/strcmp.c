#include<stdio.h>
int mystrcmp(char*,char*);
void main(){
    char str1[10]="hello";
    char str2[10]="welcome";
    int res=mystrcmp(str1,str2);
    if(res=0)
    printf("equal");
    else
    printf("not equal");
}
int mystrcmp(char* str1,char* str2){
    int i=0;
    while(str1[i]!='\0'){
          if(str1[i]==str2[i]){
            return 0;
          }
          else {
          return 1;
    }
}
}