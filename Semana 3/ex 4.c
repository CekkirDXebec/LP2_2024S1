#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Digite um número: ");
    scanf("%d", &num);
    printf("\nOs divisores de %d são: ", num);
    
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d", i);
            if (i != num)
            {
                printf(", ");
            }
        }
    }
    printf("\n");
    
    return 0;
}