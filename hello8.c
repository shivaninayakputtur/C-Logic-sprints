#include<stdio.h>
   int main(){
   int n;
   printf("enter a number:\n");
   for (int i = 0; i <5; i++)
   {
   scanf("%d",&n);
   }
   printf("the numbers are:%d\n",n);
   for(int i=0;i<5;i++)
   {
   if(n<0){
   printf("negative%d\n",n);
   }
   else if(n>0){
   printf("positive%d\n",n);
   }
   else
   printf("n is equal to zero%d\n",n);
   }
   return 0;
   }