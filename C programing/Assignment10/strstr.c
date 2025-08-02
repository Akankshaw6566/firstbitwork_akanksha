#include<stdio.h>
#include<string.h>
void str(char*, char*);
void main(){
    char s1[]="firstBitSolution";
    char s2[]="Bit";
    str(s1,s2);
}
void str(char*s1, char*s2) {
    int i=0;
    int found=0;
    while(s1[i]!='\0'){
        if (s1[i]==s2[0]) {
            int j=0;
            int k=i;
            while(s2[j]!='\0'&&s1[k]==s2[j]) {
                j++;
                k++;
            }

            if (s2[j]=='\0') {
                found=1;
                break;
            }
        }
        i++;
    }

    if(found)
        printf("found\n");
    else
        printf("not found\n");
}
