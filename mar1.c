#include<stdio.h>

int main(){
    int a[5], i;
    int largest, secondLargest, thirdLargest;

    printf("Enter 5 numbers:\n");
    for(i=0; i<5; i++){
        scanf("%d",&a[i]);
    }

    largest = secondLargest = thirdLargest = a[0];

    for(i=1; i<5; i++){
        if(a[i] > largest){
            thirdLargest = secondLargest;
            secondLargest = largest;
            largest = a[i];
        }
        else if(a[i] > secondLargest && a[i] != largest){
            thirdLargest = secondLargest;
            secondLargest = a[i];
        }
        else if(a[i] > thirdLargest && 
                a[i] != largest && 
                a[i] != secondLargest){
            thirdLargest = a[i];
        }
    }

    printf("Third largest = %d", thirdLargest);

    return 0;
}