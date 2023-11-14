#include <stdio.h>

int main()
{
    int tamanho = 5;
    int n[tamanho];
    int i;
    

    for (i = 0; i < tamanho; i++)
    {
        printf("Digite uma valor:\n ");
        scanf("%d", &n[i]);

        if (n[i]<0){
            n[i]=0;
        }
        
    }
    for (i = 0; i < tamanho; i++)
    {
        printf("valores:%d\n", n[i]);
        
    }
    
    return 0;
}
