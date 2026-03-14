#include<stdio.h>
int main(){
    int a[5],i,largest,second,third;
    printf("Enter 5 numbers:\n");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);}
    largest =second =third =a[0];
    for(i=1;i<5;i++){
        if(a[i]>largest){
            third=second;
            second=largest;
            largest=a[i];}
        else if(a[i]> second&&a[i]!=largest){
            third=second;
            second=a[i];}
        else if(a[i]>third&&a[i]!=second){
            third=a[i];}}
    printf("Third largest = %d\n",third);
    return 0;
}