#include<stdio.h>
int main(){
int a[3],i;
printf("enter the numbers:\n");
for(i=0;i<3;i++)
{
scanf("%d",&a[i]);
if(a[i]%2==0)
{
printf("%d is even\n",a[i]);
}
}
return 0;
}