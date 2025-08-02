#include<stdio.h>
#include<string.h>
void merge(int*,int*,int*);      // function declaration      
void main(){
    int a[7];
    int b[3];
    int c[10];
    printf("enter the first number");

    for(int i=0;i<7;i++){
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("enter the second number");
    for(int i=0;i<3;i++){
        scanf("%d",&b[i]);
        c[i+7]=b[i];
        
    }
    merge(a,b,c);                               // function call
}
void merge(int *a,int *b,int *c){                           // function defination
    printf("merge array");
        for(int i=0;i<10;i++){
            printf("%d",c[i]);
        }
    }
