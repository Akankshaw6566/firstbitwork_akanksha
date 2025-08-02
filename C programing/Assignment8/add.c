#include<stdio.h>
#include<string.h>
int SumOf(int*,int*, int*,int);
void main(){
    int a[5];
    int b[5];
    int c[5];
    printf("enter the first array\n");
    for(int i=0;i<5;i++){
    scanf("%d",&a[i]);
    }
    printf("enter the second array");
    for(int i=0;i<5;i++){
        scanf("%d",&b[i]);
    }
    int totalSum =SumOf(a,b,c,5);

    printf("sum of two array");
    for(int i=0;i<5;i++){
        printf("%d",c[i]);
    }
    printf("total sum= %d\n",totalSum);
}
int SumOf(int *a,int *b,int *c,int size){
    int total=0;
    for(int i=0;i<size;i++){
        c[i]=a[i]+b[i];
        total=c[i];
    }
    return total;
}

