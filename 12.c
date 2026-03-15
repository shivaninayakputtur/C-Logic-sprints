#include<stdio.h>
int main(){
    int n, i;
    int a = 0, b = 1, next;

    printf("Enter how many Fibonacci numbers to print: ");
    scanf("%d",&n);

    printf("Fibonacci series: %d %d ", a, b);

    for(i=2; i<n; i++){
        next = a + b;
        printf("%d ", next);
        a = b;
        b = next;
    }

    return 0;
}