#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // inicializa gerador randômico

    int dado = 1 + rand() % 100; // sorteia um número de 1 a 100
    int palpite;
    int tentativas = 0;

    printf("Tente adivinhar o número sorteado (entre 1 e 100):\n");

    while (tentativas < 5) 
    {
        printf("Seu palpite: ");
        scanf("%d", &palpite);

        if (palpite < 1 || palpite > 100) 
        {
            printf("Insira um número entre 1 e 100.\n");
            continue;
        }

        if (palpite == dado) 
        {
            printf("Parabéns! Você acertou!\n");
            break;
        } else if (palpite < dado) {
            printf("Você chutou muito baixo!\n");
        } else {
            printf("Você chutou muito alto!\n");
        }
        
        tentativas++;
    }

    if (tentativas == 5) 
    {
        printf("Você excedeu o número máximo de tentativas. O número correto era %d.\n", dado);
    }

    return 0;
}
