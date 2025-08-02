#include<stdio.h>
void search(int*,int);
void main(){
    int a[5];
    int no;
    printf("enter the number");
    scanf("%d",&no);
    printf("enter the element of array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    search(a,no);
}
void search(int*a,int no){
    
    int index=-1;
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