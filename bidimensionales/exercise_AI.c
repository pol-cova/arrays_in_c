//
// Created by Paul Contreras on 04/05/23.
//
#include <stdio.h>

int main() {
    int m, n, p, q, i, j, k;
    int A[100][100], B[100][100], C[100][100];

    printf("Enter the number of rows and columns of the first matrix:\n");
    scanf("%d %d", &m, &n);

    printf("Enter the elements of the first matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter the number of rows and columns of the second matrix:\n");
    scanf("%d %d", &p, &q);

    if (n != p) {
        printf("The matrices cannot be multiplied.\n");
        return 0;
    }

    printf("Enter the elements of the second matrix:\n");
    for (i = 0; i < p; i++) {
        for (j = 0; j < q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Multiplying matrices A and B and storing the result in C
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            C[i][j] = 0;
            for (k = 0; k < n; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    printf("The resultant matrix after multiplication is:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            printf("%d ", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
