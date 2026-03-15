#include<stdio.h>
int main(){
    int n;
    printf("enter a value:");
    for(int i=1;i<10;i++){
    scanf("%d",&n);
    if(n%2==0){
       printf("prime.%d\n",n);
    }else
    printf("not prime is.%d\n",n);}
return 0;
}