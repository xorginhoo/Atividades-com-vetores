#include <stdio.h>

int main()
{
    int i;
    int num[5];
    int gmaior = 0;
    int gmenor = 9999;
    int par=0;
    int impar=0;
    int posi = 0;
    int neg = 0;

    int soman=0;
    int median=0;

    int somap=0;
    int mediap=0;

     int somai=0;
    int mediai=0;



    for (i = 0; i < 5; i++)
    {
        printf("Digite um numero:\n ");
        scanf("%d", &num[i]);

        // maior e menor
        gmaior = num[i] > gmaior ? num[i] : gmaior;
        gmenor = num[i] < gmenor ? num[i] : gmenor;
        
        // par e impar
        num[i] % 2 == 0 ? par++ : impar++;

        // positivo e negativo
      if (num[i]>0){
        posi++;
      }
        if (num[i]<0){
        neg++;
      }
    }

    // dados
    printf("quantidade de numeros inseridos:%d\n", i);
    printf("media dos numeros inseridos:%d\n");
    printf("\n");
    printf("A quantidade de numeros pares e Impares:%d e %d\n", par, impar);
    printf("media de numeros pares:%d\n");
    printf("media de numeros impares:%d\n");
    printf("\n");
    printf("quantidade de numeros positivos e negativos:%d e %d\n", posi, neg);
    printf("\n");
    printf("maior e o menor numero:%d e %d\n", gmaior, gmenor);
    printf("\n");

    for (i = 4; i >= 0; i--)
    {
        printf("numeros na ordem inversa:%d\n", num[i]);
    }

    return 0;
}
