#include<stdio.h>
void strncpy(char*,char*,int);
void main(){
    char str1[]="Akanksha";
    char str2[50];
    int n;
    printf("Enter size upto");
    scanf("%d",&n);

    strncpy(str1,str2,n);
}
void mystrncpy(char*str1,char*str2,int n){
    int i=0;
    while(str1[i]!=str1[n]){
        str2[i]=str1[i];
        i++;

    }
    str2[i]='\0';
    printf("%s",str2);

}
