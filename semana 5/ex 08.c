#include <stdio.h>

void interseccao(int A[], int tamanhoA, int B[], int tamanhoB) {
    int i, j;
    int encontrou = 0;

    printf("A∩B = {");

    for (i = 0; i < tamanhoA; i++) {
        for (j = 0; j < tamanhoB; j++) {
            if (A[i] == B[j]) {
                encontrou = 1;
                printf("%d", A[i]);
                if (i < tamanhoA - 1) {
                    printf(", ");
                }
                break;
            }
        }
    }

    if (!encontrou) {
        printf("} // resposta: A∩B = {}");
    } else {
        printf("}");
    }
}

int main() {
    int A[] = {7, 2, 5, 8, 4};
    int tamanhoA = sizeof(A) / sizeof(A[0]);
    int B[] = {4, 2, 9, 5};
    int tamanhoB = sizeof(B) / sizeof(B[0]);

    interseccao(A, tamanhoA, B, tamanhoB);

    return 0;
}