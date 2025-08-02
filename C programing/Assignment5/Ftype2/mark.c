//using type 2

#include<stdio.h>
char* mark();
void main(){
    char* a=mark();
    printf("%s",a);

}
char* mark(){
    int mark;
    printf("enter mark");
    scanf("%d",&mark);

    if(mark>75){
        return "distinction";
    }
    else if(mark>65){
        return "first class";
    }
    else if(mark>55){
        return "second class";
    }
    else if(mark>=40){
        return "pass class";
    }
    else{
        return "fail";
    }
}