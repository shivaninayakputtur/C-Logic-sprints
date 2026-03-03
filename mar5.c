#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("enter the number:");
    i=0;
  while(i<3){
    scanf("%d",&n);
    sum=sum+n;
    i++;}
  printf("%d\n",sum);
  return 0;
}