#include <stdio.h>

void uniao(int A[], int tamanhoA, int B[], int tamanhoB) {
    int i, j;
    int encontrado;

    printf("UNIÃO = {");
    for (i = 0; i < tamanhoA; i++) {
        printf("%d", A[i]);
        if (i < tamanhoA - 1)
            printf(", ");
    }

    for (i = 0; i < tamanhoB; i++) {
        encontrado = 0;
        for (j = 0; j < tamanhoA; j++) {
            if (B[i] == A[j]) {
                encontrado = 1;
                break;
            }
        }
        if (!encontrado) {
            printf(", %d", B[i]);
        }
    }

    printf("}");
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int tamanhoA = sizeof(A) / sizeof(A[0]);
    int B[] = {4, 2, 9, 5};
    int tamanhoB = sizeof(B) / sizeof(B[0]);

    uniao(A, tamanhoA, B, tamanhoB);

    return 0;
}