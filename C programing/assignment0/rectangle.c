//8 write a c program to input the lenght and width of a rectangle and find its perimeter

#include<stdio.h>
void main(){
    int lenght,width;
    
    printf("enter the lenght:");
    scanf("%d",lenght);

    printf("enter the width:");
    scanf("%d,width");
    int area=lenght*width;

    int perimeter = 2*(lenght+width);

    printf("area of rectangle is %d\n",area);

    printf("perimeter of rectangle is %d\n",perimeter);

    
}