#include <stdio.h>

int main()
{
    int tamanho = 4;
    int n[tamanho];
    int i;
    float media = 0;
    float soma = 0;

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite uma nota:\n ");
        scanf("%d", &n[i]);
    }
    for (i = 0; i < tamanho; i++)
    {
        printf("nota %d:%d\n", i + 1, n[i]);
        soma += n[i];
    }
    media = soma / tamanho;
    printf("media:%1.f\n", media);
    if (media >= 7)
    {
        printf("aprovado");
    }
    else if (media >= 5)
    {
        printf("recuperar");
    }
    else
    {
        printf("reprovado");
    }

    return 0;
}