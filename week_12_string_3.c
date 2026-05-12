#include <stdio.h>

int main() {

    int table[10][10];

    // Store multiplication values
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            table[i][j] = (i + 1) * (j + 1);
        }
    }

    // Display chart
    printf("Multiplication Chart\n\n");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%4d", table[i][j]);
        }
        printf("\n");
    }

    return 0;
}