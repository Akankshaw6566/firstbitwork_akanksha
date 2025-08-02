//WAP Replace all Occurrences of a with $ in a String 
#include<stdio.h>
#include<string.h>
void main(){


    char a[20];
    printf("Enter the string");
    scanf("%s",a);

    int i;
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='a'){
           a[i]='$';
            
        }
       

    }
    printf("%s",a);
    
}