// using array

#include<stdio.h>
void main(){
    int a[7];
    printf("enter the element in array");
      for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
      }
      int min=15;
      for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
      }
      printf("minimum element is %d",min);
}