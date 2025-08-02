// using array

#include<stdio.h>
void main(){
    int a[7];
    printf("enter thr element of array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);

    }
    int max=1;
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("maximum element is %d",max);
}