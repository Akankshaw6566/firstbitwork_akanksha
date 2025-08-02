//using type 2

#include<stdio.h>
char person();
void main(){
    char p=person();
    printf("%c",p);
}
char person(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age<12){
        return "child";
    }
    else if(age>12 &&age<=19){
        return "teenager";
    }
    else if(age>=20 &&age<59){
        return "adult";
    }
    else if(age>=60){
        return "senior";
    }
    else{
        return "invalid";
    }
}
