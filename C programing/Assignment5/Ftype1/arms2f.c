//using function

#include<stdio.h>
void abc();
void main()
{
    abc();
}
void abc()
{
    int s;
  int n=s;
    int temp=n;
    int count=0;
    while(temp>0)
    {
        temp=temp/10;
        count++;
    }
    temp=n;
    int sum=0;
    while(temp>0)
    {
        int r=temp%10;
        int p=1;
        for(int i=1;i<=count;i++)
        {
            p=p*r;
        }
        sum=sum+p;
        temp=temp/10;
    }
    if(n==sum){
        printf("%d\n",s);
    }
}


