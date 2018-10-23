#include <stdio.h>

struct preferencias {
    const char *comida;
    float horas_exercicos;
};

struct peixes {
    const char *nome;
    const char *especie;
    int dentes;
    int idade;
    struct preferencias cuidados;
};


void catalog(struct peixes f)
{
    printf("Nome: %s\n",   f.nome);
    printf("Espécie: %s\n", f.especie);
    printf("Dentes: %i\n",  f.dentes);
    printf("Idade: %i\n",  f.idade);
    printf("Comida: %s\n", f.cuidados.comida);
    printf("Exercícios: %f horas\n",  f.cuidados.horas_exercicos);
         
}


int main(){
    
    struct peixes snappy = {"Snappy", "Piranha", 69, 4, {"Carne", 7.5}};
     
    catalog(snappy);
   
    return 0;
}
