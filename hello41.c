#include<stdio.h>
int main() {
    int i, j, n = 5;

    for(i = 1; i <= n; i++) {
        for(j = 1; j <= i; j++) {
            // Logic: If on the first column, last row, or the diagonal
            if(j == 1 || i == n || j == i) {
                printf("*");
            } else {
                printf(" "); // The hollow middle
            }
        }
        printf("\n");
    }
    return 0;
}