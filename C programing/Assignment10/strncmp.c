int mystrncmp(char*,char*,int);
#include<stdio.h>
void main(){
    char s1[]="Hello";
    char s2[]="world";
    int n;
    printf("Enter limit");
    scanf("%d",&n);
    int res=strncmp(s1,s2,n);
    if(res==0)
    printf("equal");
    else
    printf("not equal");
}
int strncmp(char* s1,char* s2,int n){
    int i=0;
    while (i<n) {
        if (s1[i]!= s2[i]) {
            return 1; 
        }
         if(s1[i]=='\0'||s2[i]=='\0') {
            break;
        }
        i++;
    }
    return 0; 
}