#include <stdio.h>
#include <stdlib.h>

#define SQR(x) ((x) * (x))

#define DEBUG

int main()
{
    int counter;

    for (counter = 0; counter < 5; ++counter)
    {
        printf("x: %d, x ao quadrado: %d\n",
            counter+1, SQR(counter+1));
    }

    #ifdef DEBUG
    puts("Debug ativado!");
    #endif // DEBUG

    getchar();

    return (0);
}
