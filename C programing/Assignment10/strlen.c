#include<stdio.h>
int strlen(char[]);
void main(){
    char str[40]="Akanksha Wadekar";
    
    int res=strlen(str);
     printf("%d",res);

}
int strlen(char str[]){
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    return count;
   
}