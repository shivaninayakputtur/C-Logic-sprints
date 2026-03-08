#include<stdio.h>
int main(){
    int a[5],i,sum=0,largest,smallest;
    float average;
    printf("enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
        average=sum/5.0;
        if(i==0)
        largest=smallest=a[i];
       if(a[i]>largest){
        largest=a[i];
       }else
       if(a[i]<smallest){
        smallest=a[i];
       }
    }printf("sum=%d\n average=%.2f\n largest=%d\n smallest=%d\n",sum,average,largest,smallest);
    return 0;
}