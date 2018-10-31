#include <stdio.h>

// com definicao de numeros
enum cardsuit {
    CLUBS    = 1,
    DIAMONDS = 2,
    HEARTS   = 4,
    SPADES   = 8,
    FIRST = 10,
    SECOND,    //igual a 11
    THRID,       //igual a 12
};

enum semana{DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO};

int main(){
    enum semana hoje;
    
    hoje=SEGUNDA;
    
    printf("%d dia\n",hoje+1);
    
    return 0;
} 
