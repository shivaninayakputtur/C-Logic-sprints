#include<stdio.h>
int main(){
    int a[5],n,i,target;
    printf("enter the number:");
    for(i=0;i<5;i++){
    scanf("%d",&a[i]);
    printf("enter the no to search:\n");
    scanf("%d",&target);
    if(a[i]=target){
            printf("found%d\n",a[i]);
        }
        else
        printf("not found%d\n",a[i]);
    }return 0;
}