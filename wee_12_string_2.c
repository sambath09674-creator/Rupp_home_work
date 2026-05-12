#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int A[3][3], B[3][3], C[3][3];

    srand(time(0));

    // Generate random values
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            A[i][j] = rand() % 10;
            B[i][j] = rand() % 10;
        }
    }

    // Display Matrix A
    printf("Matrix A:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    // Display Matrix B
    printf("\nMatrix B:\n");
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", B[i][j]);
        }
        printf("\n");
    }

    // Matrix Multiplication
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {

            C[i][j] = 0;

            for(int k = 0; k < 3; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Display Result
    printf("\nResult Matrix:\n");

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
