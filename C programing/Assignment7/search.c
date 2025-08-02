// using array

#include<stdio.h>
void main(){
    int a[5];
    printf("enter the element in array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    int no;
    int index=-1;
    printf("enter the number");
    scanf("%d",&no);
    for(int i=0;i<5;i++){
        if(a[i]==no){
            index=i;
            break;
        }
    }
    if(index==-1){
        printf("element not found");
    }
    else{
        printf("element found at %d",index);
    }
}