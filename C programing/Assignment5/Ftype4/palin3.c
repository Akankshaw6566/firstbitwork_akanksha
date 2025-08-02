// using type 4 palindrome for 3 digit number

#include<stdio.h>
int palindrome(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);

    int a=palindrome(n);
    if(a==1)
    printf("palindrome");
    else
    printf("not palindrome");
}
int palindrome(int n){
    int temp=n;
    int rev=0;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==temp){
        return 1;
    }
    else{
        return 0;
    }
}