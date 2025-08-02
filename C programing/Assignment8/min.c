#include<stdio.h>
#include<string.h>
void min(int*);                    //function declaration
void main(){
    int a[7];
    printf("enter element of array");
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    min(a);                                 // function call
}
void min(int a[]){                                                // function declaration
    int max=1;
    for(int i=0;i<5;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    printf("maximun element is %d\n",max);

    int min=15;
    for(int i=0;i<5;i++){
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("minimun elements is%d",min);
}