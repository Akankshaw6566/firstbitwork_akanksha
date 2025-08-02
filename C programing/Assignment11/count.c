// to Count the Number of Vowels in a String 
#include<stdio.h>
#include<string.h>
void main(){
    int x[20];
    printf("Enter string");
    scanf("%s",x);
    int count=0;
    for(int i=0;i<strlen(x);i++){
        if(x[i]=='a'||x[i]=='A'||x[i]=='e'||x[i]=='E'||
           x[i]=='i'||x[i]=='I'||x[i]=='o'||x[i]=='O'||
           x[i]=='u'||x[i]=='U') {
            count++;
        }

    }
    printf("%d",count);
}