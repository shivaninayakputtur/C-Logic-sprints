#include<stdio.h>
int main(){
    int n,rem,sum=0,rem1,original;
    printf("enter a number:");
    scanf("%d",&n);
    original=n;
        while(n!=0){
           
        rem=n%10;
        sum=sum+(rem*rem*rem);
        n=n/10;
        }if(sum==original){
            printf("armstrong");
        }return 0;
    }
