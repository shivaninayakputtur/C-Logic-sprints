#include<stdio.h>
int main(){
    int n,rem,rev=0,original;
    printf("enter the number:\n");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;}
    if(original==rev){
        printf("palindrome.");
    }else{
    printf("not a palindrome.");}
    return 0;
}