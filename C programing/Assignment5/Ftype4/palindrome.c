// using type 4

#include<stdio.h>
int palindrome(int);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int k=palindrome(n);
    if(k==1)
    printf("palindrome");
    else
    printf("not palindrome");
}
int palindrome(int n){
    int rev=0;
    int temp=n;
    while(n>0){
        int rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(temp==rev){
        return 1;
    }
    else{
        return 0;
    }
}