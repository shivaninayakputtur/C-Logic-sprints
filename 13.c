#include<stdio.h>
int main(){
    int a[5],i,largest,secondlargest;
    printf("enter a number:");
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
        if(i==0){
        largest=secondlargest=a[i];
        if(a[i]>largest){
            secondlargest=largest;
          largest=a[i];
        }}
}printf("the secondlargest value is =%d\n",secondlargest);
return 0;
}
