//using type 3

#include<stdio.h>
void palindrome(int);
void main(){
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    palindrome(n);
}
void palindrome(int n){
    int original=n;
    int rev=0;
    int temp=n;
    while(temp!=0){
        int rem=temp%10;
        rev=rev*10+rem;
        temp=temp/10;
    }
    if(original==rev){
        printf("palindrome");
    }
    else{
        printf("not palindrome");
    }
}