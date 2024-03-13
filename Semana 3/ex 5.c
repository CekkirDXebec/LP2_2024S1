#include <stdio.h>

int main() 
{
    int num;
    int somaDivisores = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &num);

    // Calcula a soma dos divisores do número
    for (int i = 1; i < num; i++) 
    {
        if (num % i == 0) {
            somaDivisores += i;
        }
    }

    // Verifica se o número é perfeito
    if (somaDivisores == num) 
    {
        printf("%d é um número inteiro perfeito.\n", num);
    } 
    else 
    {
        printf("%d não é um número inteiro perfeito.\n", num);
    }

    return 0;
}
