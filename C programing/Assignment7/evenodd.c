// using array

#include<stdio.h>
void main(){
    int a[8];
    printf("enter the element of array");
    for(int i=0;i<8;i++){
        scanf("%d",&a[i]);
    }
    printf("even number in this array");
    int d=1;
    for(int i=0;i<8;i++){
        if(a[i]%2==0){
            d=a[i];
            printf("%d",d);
        }
    }
   // printf("\n");
    printf("odd number are");
    for(int j=0;j<8;j++){
        if(a[j]%2!=0){
        d=a[j];
        printf("%d",d);
        }
    }
}