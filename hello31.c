#include<stdio.h>
int printnumber(int n){
    if(n%2==0)
    return 1;
    else
    return 0;
}
int main(){
    int n;
    printf("enter a the number:\n");
    scanf("%d",&n);
    int result=printnumber(n);
    if(result==1){
        printf("even");}
        else
        printf("odd");
    
    
    return 0;

}