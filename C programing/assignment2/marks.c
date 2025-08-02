// write a c program to print the marks

#include<stdio.h>
void main(){
    int  marks;
    printf("enter marks");
    scanf("%d",&marks);

    if(marks>75){
          printf("marks is distinction");
    }
    else if(marks>65){
          printf("marks is first class");
    }
    else if(marks>55){
          printf("marks is second class");
    }

    else if(marks>=40){
          printf("marks is pass class");
    }
    else{
        printf("marks is fail");
    }
    
}