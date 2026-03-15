#include<stdio.h>
int main(){
    int n,rev=0,rem,sum=0;
    printf("enter value:");
    scanf("%d",&n);
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
        sum=sum+rev;
    }printf("reversed value is.%d\n",sum);
    printf("%d\n",rev);
    return 0;
}/* reversing a number*/