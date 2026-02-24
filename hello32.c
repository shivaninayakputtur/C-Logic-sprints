#include<stdio.h>
int main(){
    int largest, smallest,sum=0,a[4],i;
    printf("enter the numbber:\n");
    for(i=0;i<4;i++){
        scanf("%d",&a[i]);
        sum=sum+a[i];
        if(i==0){
        largest=a[0];
        smallest=a[0];}
        if(a[i]>largest){
            largest=a[i];
        }
        
        
        if(a[i]<smallest){
            smallest=a[i];
        }}
        printf("%d%d%d\n",sum,largest,smallest);
    return 0;
}