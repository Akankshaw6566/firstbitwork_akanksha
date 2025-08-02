//using type 2

#include<stdio.h>
char vote();
void main(){
    char d=vote();
    if(d=='Y')
    printf("you can vote");
    else
    printf("you cannot vote");
}
char vote(){
    int age;
    printf("enter your age");
    sacnf("%d",&age);
    if(age>=18){
        return 'Y';
    }
    else{
        return 'N';
    }
}