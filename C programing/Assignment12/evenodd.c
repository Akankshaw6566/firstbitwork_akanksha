#include<stdio.h>
#include<stdlib.h>
void Even(int*);
void main(){
    int *x=(int*)malloc(sizeof(int)*8);
    printf("Enter element of array");
    for(int i=0;i<8;i++){

        scanf("%d",&x[i]);

    }
    Even(x);
    free(x);
    
    
}
void Even(int*x){
    printf("Even number in this array-");
    int a=1;
    for(int i=0;i<8;i++){
        if(x[i]%2==0){
            a=x[i];
            printf("%d ",a);
        }
    }
    printf("\n");
    printf("Odd number are-");
    for(int j=0;j<8;j++){
        if(x[j]%2!=0){
            a=x[j];
            printf("%d ",a);
        }
    }

}