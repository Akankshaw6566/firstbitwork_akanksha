#include<stdio.h>
#include<string.h>
void Alternate(int*);
void main(){
    int x[5];
    printf("enter the element of array");
    for(int i=0;i<5;i++){
        scanf("%d",&x[i]);
    }
    Alternate(x);
}
    void Alternate(int*x){
    for(int i=0;i<5;i+=2){
        printf("%d",x[i]);
    }
}