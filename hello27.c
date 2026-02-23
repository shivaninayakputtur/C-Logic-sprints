/*function with Arguments & return value*/
#include<stdio.h>
int sum(int a,int b){
    return a+b;
}
int main(){
    int a,b,c;
    a=10;
    b=25;
    c=sum(a,b);
    printf("%d",c);
    return 0;
}