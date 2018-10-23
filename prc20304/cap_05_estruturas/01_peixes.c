#include <stdio.h>

struct peixes {
    const char *nome;
    const char *especie;
    int dentes;
    int idade;
};


void catalog(struct peixes f)
{
    printf("%s 'e um(a) %s com %i dentes. Sua idade 'e %i\n",
           f.nome,
           f.especie,
           f.dentes,
           f.idade );
}


int main(){
    
    struct peixes snappy = {"Snappy", "Piranha", 69, 4};
     
    catalog(snappy);
   
    return 0;
}
