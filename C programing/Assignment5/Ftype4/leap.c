//using type 4

#include<stdio.h>
char leap(int);
void main(){
    int year;
    printf("enter the year");
    scanf("%d",&year);
    char b=leap(year);
    
    if(b='L')
    printf("leap year");
    else
    printf("not leap year");
}
char leap(int year){
    if(year%400==0 || (year%4==0 && year%100!=0))
    return 'L';
    else
    return 'N';
}