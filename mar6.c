#include<stdio.h>
int main(){
    int n,rem,sum=0;
    printf("enter the value:");
    while(n!=0){
        scanf("%d",&n);
        rem=n%10;
        sum=sum+rem;
        n=n/10;
    }printf("%d",sum);
    return 0;
}