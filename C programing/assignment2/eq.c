// write a c program for is triangle equilateral,isosceles,scalene

#include<stdio.h>
void main(){
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