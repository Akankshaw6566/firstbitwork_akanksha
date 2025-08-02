// write a code to accept the age and check if the person is child(age<12) teenager (12-19) adult (20-59) senior(60 and above)

#include<stdio.h>
void main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age<12){
        printf("it is child");
    }
    else if(age>=12 && age<=19){
        printf(" it is teenager");
    }
    else if(age>=20 && age<59){
         printf("its adult");    
    }
    else if(age>=60){
        printf("it is senior");
    }
    else{
        printf("invalid");
    }
}