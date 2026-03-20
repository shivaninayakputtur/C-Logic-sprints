#include<stdio.h>
int main(){
    int n,i,a=0,b=1,next;
    printf("enter  a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        next=a+b;
        a=b;
        b=next;
        printf("the fibonaaci is of number n is %d\n",a,next);

    }return 0;

}