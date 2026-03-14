#include<stdio.h>
int main(){
    int i,n,sum=0,rem,original;
    printf("enter few numbers:\n");
    scanf("%d",&n);
    original =n;
    while(n!=0){
        rem=n%10;
        sum=sum+rem*rem*rem;
        n=n/10;
    }
    if(sum==original){
        printf("sum=%d\n",sum);}
        else
        printf("srry bad");
    return 0;
    
}/* armstrongvalue*/