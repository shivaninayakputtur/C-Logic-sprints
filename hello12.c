#include<stdio.h>
int main(){
int arr[2],v1,v2;
printf("enter two number:\n");
scanf("%d%d",&v1,&v2);
if(v1>v2)
{
printf("larger value is v1.\n");
}
else
{
printf("larger value is v2.\n");
}
return 0;
}