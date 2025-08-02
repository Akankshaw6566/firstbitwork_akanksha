#include<stdio.h>
#include<string.h>
int mycasecmp(char*,char*);
void main(){
    char str1[]="viraj";
    char str2[]="manas";
    int a=mycasecmp(str1,str2);
    printf("%d",a);

}
int mycasecmp(char* str1,char*str2){
    int i=0 ,flag;
    while(str1[i]!='\0'){
           if(str1[i]==str2[i] || str1[i]-str2[i]==-32 || str1[i]-str2[i]==32){
            flag=0;
           }
           else{
            return 0;
           }
           i++;
    }
    return flag;
    }
