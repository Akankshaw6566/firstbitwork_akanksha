//using type 4

#include<stdio.h>
int Arm(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int x=Arm(n);
    if(x==1)
    printf("Armstrong number");
    else
    printf("not Armstrong number");
}
int Arm(int n){
    int temp=n;
    int count=0;
    while(temp>0){
        temp=temp/10;
        count++;
    }
    temp=n;
    int sum=0;
    while(temp>0){
        int rem=temp%10;
        int p=1;
        for(int i=1;i<=count;i++){
            p=p*rem;
        }
        sum=sum+p;
        temp=temp/10;
    }
    if(n==sum)
    return 1;
    else
    return 0;
}