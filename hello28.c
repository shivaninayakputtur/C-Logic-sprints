/*function with Arguments without return value*/
#include<stdio.h>
void printstar(int n){
    for(int i=1;i<=n;i++){
printf("*");}
}
int main()
{
    int n=5;
    printstar(n);
    return 0;
}