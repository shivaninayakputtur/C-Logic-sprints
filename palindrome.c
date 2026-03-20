#include<stdio.h>
int main(){
    int n,i,rev=0,rem,original;
    printf("enter a value");
    scanf("%d",&n);
    original=n;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }if(rev==original){
        printf("found%d\n",rev);
    }
    return 0;
}