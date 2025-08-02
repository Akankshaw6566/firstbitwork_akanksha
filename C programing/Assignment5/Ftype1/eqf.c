//using function

#include<stdio.h>
void eq();
void main()
{
    eq();
}
void eq()
{
    int a,b,c;

    printf("enter three positive side :");
    scanf("%d %d %d",&a,&b,&c);



         
      if(a==b && b==c && c==a){
            printf(" its equalateral triangle ");
        }
        else if (a==b || a==c || b==a ){
            printf(" its isoscalen triangle ");
        }
        else{
            printf("its scalen triangle ");
        }
}