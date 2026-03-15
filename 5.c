#include<stdio.h>
int main(){
    int a[5],largest,i;
    printf("enter value");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(i==0){
        largest=a[0];}
        if(a[i]>largest){
            largest=a[i];
        }}
    printf("largest =%d\n",largest);
    return 0;
}