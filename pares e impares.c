#include <stdio.h>

int main()
{

    int n[6];
    int i;
    int par=0;
    int impar=0;

    for (i = 0; i < 6; i++)
    {
        printf("Digite uma numero:\n ");
        scanf("%d", &n[i]);

        n[i] % 2 == 0 ? par++ : impar++;
    }

    printf("tem quantos pares:%d\n", par);
    printf("tem quantos impares:%d \n", impar);

    return 0;
}