//using type 2

#include<stdio.h>
int arm();
void main(){
    int res=arm();
}
int arm(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int temp=n;
    int count=0;

    while(temp>0);
        temp=temp/10;
    count++;
    temp=n;
}

int sum=0;
while(temp>0){
      int r=temp%10;
      int a=1;
      for(int i=1;i<=count;i++){
        a=a*r;
      }
       sum=sum+a;
       temp=temp/10;
}
if(sum==n){
    printf("armstrong");
}
else{
    printf("not armstrong");
}
   return sum;
