#include<stdio.h>
int main(){
int i,j,n=5;
for (i=1;i<=5;i++){//row
for (j=1;j<=n-i;j++){//space
printf(" ");
}
for(j=1;j<=2*i-1;j++){//star
printf("*");//upper pyramid
}
printf("\n");
}    
for(i=n-1;i>=1;i--){
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
    printf("*");//lower pyramid
}
printf("\n");
}
return 0;   
}