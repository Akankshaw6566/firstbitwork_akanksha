// using type 2

#include<stdio.h>
int evenodd();
void mian()
{
  int a=evenodd();
  if(a==1)
  {
    printf("its even nuumber");
  }
  else{
    printf("its odd number");
  }
}
int evenodd(){
    int n=21;
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}