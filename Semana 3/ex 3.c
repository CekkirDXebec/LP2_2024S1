#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL)); // inicializa gerador randômico

    int dado = 1 + rand() % 100; // sorteia um número de 1 a 100
    int palpite;
    int tentativas = 0;

    printf("Tente adivinhar o número sorteado (entre 1 e 100):\n");

    do 
    {
        printf("Seu palpite: ");
        scanf("%d", &palpite);
        tentativas++;

        if (palpite < 1 || palpite > 100) 
        {
            printf("Por favor, insira um número entre 1 e 100.\n");
            continue; 
        }

        if (palpite == dado) 
        {
            printf("Parabéns! Você acertou em %d tentativa(s)!\n", tentativas);
            break; 
        } 
        else if (palpite < dado) 
        {
            printf("Você chutou muito baixo!\n");
        } 
        else 
        {
            printf("Você chutou muito alto!\n");
        }
    } 
    while (1);

    return 0;
}
