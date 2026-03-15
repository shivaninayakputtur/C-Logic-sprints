#include<stdio.h>
int main(){
    int n,original,rev=0,rem;
    printf("enter a number:");
    scanf("%d",&n);
   n=-original;
    while(n!=0){
    rem=n%10;
    rev=rev*10+rem;
    n=n/10;
    }if(original==n){
        printf("its an palindrome");
    }else 
    printf("its not an palindrome");
    return 0;
}/* palindrome*/