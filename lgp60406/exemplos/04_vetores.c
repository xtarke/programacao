#include <stdio.h>

int main()
{
    int k;
    float a[3];

    // Vetor de float inicializado pelo usuario
    for (k = 0; k < 3; k = k + 1){
        printf("Forneça um numero: ");
        scanf("%f", &a[k]);
    }

    //Imprime todos os valores
    for (k = 0; k < 3; k = k + 1)
        printf("a[%d]: %f\n", k, a[k]);

    return 0;
}
    
