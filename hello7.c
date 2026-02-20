#include<stdio.h>
   int main(){
   int a[3],i;                                             
   printf("enter the number:\n");
   i=0;
   while(i<3)
   {scanf("%d",&a[i]);  
   printf("the number is:%d\n",a[i]);
   i++;
   }     
   return 0;
   }