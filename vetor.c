#include <stdio.h>

int main()
{

    int i;
    char nome[5][200];
    int idades[5];

    for (i = 0; i < 5; i++)
    {
        printf("Digite seu nome:\n ");
        scanf("%s", &nome[i]);
        printf("Digite sua idade:\n ");
        scanf("%d", &idades[i]);
        fflush(stdin);
    }

    system("cls||clear"); 
    
    for (i = 0; i < 5; i++)
    {
        printf("%s,%d anos\n", nome[i], idades[i]);
    }

    return 0;
}