/*function without Arguments without return value*/
#include<stdio.h>
void printname()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    if(a>0){
        printf("positive:%d\n",a);}
    }

int main(){
    printname();
    return 0;
}