#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;

    int notas[2][3];

    for (i=0; i < 2; i++)
    {
        printf("Aluno: %d\n", i);
        for (j=0; j < 3; j++){
            printf("Nota[%d]: ", j);
            scanf("%d", &notas[i][j]);
        }
    }
    return 0;
}
