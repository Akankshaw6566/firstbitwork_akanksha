#include<stdio.h>
int Sum(int*);            //diclaration
void main(){
    int a[7];
    for(int i=0;i<6;i++){
        scanf("%d",&a[i]);
    }
    int k=Sum(a);              //call
    printf("%d",k);
}
int Sum(int*a){              // defination
    int sum=0;
    for(int i=0;i<6;i++){
        sum=sum+a[i];
    }
    return sum;
}