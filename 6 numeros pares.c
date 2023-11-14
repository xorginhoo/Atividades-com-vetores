#include <stdio.h>

int main()
{
    int tamanho = 6;
    int n[tamanho];
    int i=0;
  

    for (i = 0; i < tamanho; i++)
    {

        if (n[i] % 2 == 0)
        {
            printf("Digite uma valor:\n ");
            scanf("%d", &n[i]);
        }
    }

    for (i = tamanho; i > 0; i--)
    {
        printf("valores: %d \n", n[i]);
    }

    return 0;
}