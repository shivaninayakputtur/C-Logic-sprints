#include<stdio.h>
int main(){
    int n,count;
    printf("enter the number:\n");
    scanf("%d",&n);
    while(n!=0){
     n=n%10;
     count++;
    }
    printf("the count is %d\n",count);
return 0;
}