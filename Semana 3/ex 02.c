#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // inicializa gerador randômico

    int tentativas = 0;
    int dado = 1; // sorteia um número de 1 a 100
    int palpite;

    printf("Tente adivinhar o nmero sorteado (entre 1 e 100):\n");

    do
    {
        printf("Seu palpite: ")
        scanf(%d, &palpite);
        if (palpite < 1 || palpite > 100)
        {
            printf("Digite um valor entre 1 e 100: ");
            continue;
        }

        tentativas++;

        if (palpite == dado)
        {
            printf("Parabéns! número de tentativas: %d\n", tentativas);
            break;
        }
        else if (palpite < dado)
        {
            printf("Você chutou muito baixo (%d tentativa(s).\n", tentativas);
        }
        else
        {
            printf("Você chutou muito alto (%d tentativa(s).\n", tentativas);
        }
    }
    while (1);

    return 0;
}
