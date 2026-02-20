#include<stdio.h>
   int main(){
   int a[5],i,sum=0;              
   printf("enter the numbers:\n");
   for(int i=0;i<5;i++)
   {  
   scanf("%d",&a[i]);
   } for(i=0;i<5;i++){
    
   sum=sum+a[i];
   printf("sum of the numbers are%d\n",sum);}
   return 0;
   }