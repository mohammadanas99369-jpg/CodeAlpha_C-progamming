#include <stdio.h>

void addMatrix(int a[10][10], int b[10][10], int r, int c) {
    int sum[10][10], i, j;

    printf("\nMatrix Addition:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

void multiplyMatrix(int a[10][10], int b[10][10], int r1, int c1, int c2) {
    int product[10][10], i, j, k;

    printf("\nMatrix Multiplication:\n");
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            product[i][j] = 0;
            for(k = 0; k < c1; k++) {
                product[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}

void transposeMatrix(int a[10][10], int r, int c) {
    int i, j;

    printf("\nTranspose of Matrix A:\n");
    for(i = 0; i < c; i++) {
        for(j = 0; j < r; j++) {
            printf("%d ", a[j][i]);
        }
        printf("\n");
    }
}

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;

    printf("Enter number of rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter elements of Matrix A:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of Matrix B:\n");
    for(i = 0; i < r; i++)
        for(j = 0; j < c; j++)
            scanf("%d", &b[i][j]);

    addMatrix(a, b, r, c);
    multiplyMatrix(a, b, r, c, c);
    transposeMatrix(a, r, c);

    return 0;
}