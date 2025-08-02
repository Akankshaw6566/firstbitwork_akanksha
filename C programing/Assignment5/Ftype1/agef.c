//using function

#include<stdio.h>
void age();
void main()
{
    age();
}
void age()
{
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