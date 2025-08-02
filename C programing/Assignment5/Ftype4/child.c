// using type 4

#include<stdio.h>
int child(int);
void main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    int n=child(age);
    if(n==1){
        printf("child");
    }
    else if(n==2){
        printf("teenager");
    }
    else if(n==3){
        printf("adult");
    }
    else if(n==4){
        printf("senior");
    }
    else{
        printf("invalid");
    }
}
int child(int age){
    if(age<12){
        return 1;
    }
    else if(age>=12 &&age<=19){
        return 2;
    }
    else if(age>=20 && age<59){
        return 3;
    }
    else if(age>=60){
        return 4;
    }
    else{
        return 0;
    }
}