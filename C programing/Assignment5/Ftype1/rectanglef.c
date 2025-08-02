//using function

#include<stdio.h>
void rect();
void main()
{
    rect();
}
void rect()
{
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