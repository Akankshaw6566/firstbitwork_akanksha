//using type 4

#include<stdio.h>
char stud(int);
void main(){
    int mark;
    printf("enter the marks");
    scanf("%d",&mark);
    char*result=stud(mark);
    printf("grand:%s\n",result);
}
char stud(int mark){
    if(mark>75){
    return("distinction");
    }
    else if(mark>65){
    return("first class");
    }
    else if(mark>55){
    return("second class");
    }
    else if(mark>=40){
    return("pass class");
    }
    else{
    return("fail");
    }
}
