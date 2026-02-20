#include<stdio.h>
int main(){
  int a[4],i;
  printf("enter the numbers:\n");
  for(i=0;i<4;i++)
  {
  scanf("%d",&a[i]);
  }
  printf("the numbers are:%d\n",a[i]);
  for(i=0;i<4;i++){
  if(a[i]<0){
  printf("negative:%d\n",a[i]);
  }
  else if(a[i]>0){
  printf("positive:%d\n",a[i]);}
  else
  printf("equal to zero:%d\n",a[i]);
  }
  return 0;
  }