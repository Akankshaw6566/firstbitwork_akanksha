#include<stdio.h>
void strcat(char*,char*,int);            // function declaration
void main(){
    char S1[10]="welcome";
    char S2[10]="akanksha";
    int n=2;
    strcat(S1,S2,n);                    // function call
    printf("%s\n",S1);
}
void strcat(char* S1,char* S2,int n){        //function defination
    int i=0,j=0;
    while(S1[i]!='\0'){
        i++;
    }
    while(j<n && S2[j]!='\0'){
        S1[i]=S2[j];
        j++;
        i++;
    }
    S1[i]='\0';
}