//using type 2

#include<stdio.h>
int palindrome();
void main()
{
  if (palindrome()==1)
  {
    printf("palindrome");
  }
  else{
    printf("not palindrome");
  }
}
int palindrome(){
    int n,original;
    int rev=0;
    printf("enter the number\n");
    scanf("%d",&n);
    original=n;
    int temp=n;
    while(temp!=0)
    {
        int rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(original==rev)
    {
        return 1;
    }
    else{
        return 0;
    }
}

