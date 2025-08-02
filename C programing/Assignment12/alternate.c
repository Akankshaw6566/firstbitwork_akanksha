//alternate element 
#include<stdio.h>
#include<stdlib.h>
void Alternate(int*);
void main(){
    int *x=(int*)malloc(sizeof(int)*5);
    printf("Enter element of array");
    for(int i=0;i<5;i++){
        scanf("%d",&x[i]);
    }

    Alternate(x); 
}
void Alternate(int*x){
    for(int i=0;i<=5;i+=2){
        printf("%d ",x[i]);
    }

}