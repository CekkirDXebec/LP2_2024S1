#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL)); // inicializa gerador randômico

    int dado = 1 + rand() % 100; // sorteia um número de 1 a 100
    int palpite;

    printf("Tente adivinhar o número sorteado (entre 1 e 100):\n");

    printf("Seu palpite: ");
    scanf("%d", &palpite);

    while (palpite < 1 || palpite > 100) {
        printf("insira um número entre 1 e 100.\n");
        printf("Seu palpite: ");
        scanf("%d", &palpite);
    }

    if (palpite == dado) 
    {
        printf("Parabéns! Você acertou!\n");
    } 
    else if (palpite < dado) 
    {
        printf("Você chutou muito baixo! O valor correto é %d.\n", dado);
    } 
    else 
    {
        printf("Você chutou muito alto! O valor correto é %d.\n", dado);
    }

}
