//write a program to scan string from user then scan a single character and search it 
//in a accepted string
#include<stdio.h>
#include<string.h>
void main(){
    char a;
    printf("Enter character\n");
    scanf("%c",&a);
    char x[20];
    printf("Enter any string\n");
        scanf("%s",x);
   
    
    int found=0;
    for(int i=0;i<strlen(x);i++){
        if(x[i]==a){
            found=1;
            break;
        }
        
    }
    if(found){
        printf("Yes character found");
    }
    else{
        printf("No not found");
    }
    

}