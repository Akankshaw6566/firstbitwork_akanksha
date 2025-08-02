//using type 2

#include<stdio.h>
int leap();
void main(){
    if(leap()==1){
      printf("leap year");
    }
    else{
        printf("not leap");
    }
}
int leap(){
    int year;
    printf("enter year\n");
    scanf("%d",&year);
    if(year%4==0 || year%400==0 && year%100==0){
        return 1;
    }
    else{
        return 0;
    }
}