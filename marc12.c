#include<stdio.h>
int main(){
    int n,fact=1,i;
    printf("enter a value");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("the factorial of number is %d\n",fact);
    return 0;
}