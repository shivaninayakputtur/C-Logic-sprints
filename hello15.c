#include<stdio.h>
int main(){
int n,largest,i;
printf("enter the number:\n");
for(int i=0;i<5;i++)
{
scanf("%d",&n);}
largest =n;
for(i=0;i<5;i++)
{
if(n>largest)
{
largest =n;
}
}
printf("the largest number is:%d\n",largest);
return 0;
}