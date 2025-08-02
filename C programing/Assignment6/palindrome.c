// using pointer

#include<stdio.h>
void palindrome(int*);
void main(){
    int n;
    printf("enter the number");
    scanf("%d",&n);
    palindrome(&n);
}
void palindrome(int* n){
    int temp;
    int rev=0;
    temp=*n;
    while(*n>0){
        int rem=*n%10;
        rev=rev*10+rem;
        *n=*n/10;
    }
    if(rev==temp){
        printf("is palindrome");
    }
    else{
        printf("is not palindrome");
    }
}