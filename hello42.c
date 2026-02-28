#include<stdio.h>
int main(){
    int sum=0,n,i,total;
    float average;
    printf("enter the number:");
    for(i=0;i<=10;i++){
        scanf("%d",&n);
        if(n<10){
         sum=sum+n;
        average=(sum/8);}
        else if(n>10)
        break;
        printf("the sum is.%d\n",sum);
        printf("the average is%.3f\n",average);}
return 0;
    }
