/* functions without arguments with return value*/
#include<stdio.h>
int takenumber()
{ int i;
    printf("enter a number:\n");
    scanf("%d",&i);
    return i;
}
int main(){
   int i;
   i=takenumber();
    printf("number entered is:%d\n",i);
    return 0;
}