# Estruturas em C

Estruturas em C são variáveis que agrupam dados de diferentes tipos. As estruturas são utilizadas para a criação de objetos e classes para formar novos tipos de dados customizados.

Para exemplificar, podemos construir uma estrutura para armazenar os dados dos veículos da sua família.

```C
#include <stdio.h>

/* Definição global do tipo */
struct veiculo{
    char marca[16];
    int ano;
};

int main(){

    /* Criação da variável meu_ford */
    struct veiculo meu_ford = {"Ford GT", 1965};

    /* O operador ponto é utilizado para acessar os membros de estruturas */
    printf("Marca: %s\n", meu_ford.marca);
    printf("Ano: %d\n", meu_ford.ano);

    return 0;
}
```

Estruturas também podem ser utilizadas para criar dados matemáticos personalizados, como números complexos:

```C
#include <stdio.h>
#include <math.h>

/* Coordenadas polares */
struct polares {
    float modulo;
    float angulo;
};

/* Número complexo: coordenadas cartesianas e polares */
struct complexo {
    float real;
    float img;
    struct polares polar;
};

/* Módulo de um número complexo */
float modulo (struct complexo a){
    return sqrt(pow(a.real,2) + pow(a.img,2));
}

/* Soma de um número complexo */
struct complexo soma (struct complexo a, struct complexo b){
    struct complexo soma;

    soma.real = a.real + b.real;
    soma.img = a.img + b.img;

    return soma;
}

/* Impressão de um número complexo */
void imprimir(struct complexo z) {
    printf("Real: %f\n", z.real);
    printf("Img: %f\n", z.img);
}

int main(){

    /* Três números complexos estruturados */
    /* Inicialização na criação */
    struct complexo a = { 3, 4, {5, 0.785398}};
    struct complexo b, c;

    /* Inicialização por atribuição */
    b.real = 9;
    b.img = 5;

    /* Módulo de b */
    b.polar.modulo = modulo(b);

    printf("Modulo de b: %f\n", b.polar.modulo);

    c = soma(a,b);

    imprimir(c);

    return 0;
}
```

## Typedefs

__typedef__ permite renomear um tipo padrão para um nome diferente como por exemplo abaixo. Cria-se o tipo byte baseado no _unsigned char_

```C
/* Cria um tipo byte baseado no unsigned char */
typedef unsigned char byte;

/* Cria uma variável do tipo byte (na verdade é um unsigned char)
byte x;
```

Os __typedef__ são úteis quando lidamos com estruturas. Através do __typedef__, podemos suprimir a palavra __struct__ facilitando a leitura do código.

```C
typedef struct pontos{
    float x;
    float y;
    float z;
} ponto_t;
```

Através da criação desse __typedef__, pode-se criar uma variável __p__ da seguinte forma:

```C
point p;
```

Estruturas também podem conter ponteiros. Isso é muito útil quando trabalhamos com alocação dinâmica de memória:

```C
typedef struct veiculo {
    char * marca;
    int modelo;
} veiculo_t;

(...)

veiculo_t minha_moto;
minha_moto.marca = "Ducati";
minha_moto.modelo = 2015;
```

## Alocação dinâmica e estruturas

Estruturas também podem ser alocadas dinamicamente:

```C

#include <stdlib.h>
#include <string.h>

typedef struct veiculo {
    char marca[64];
    int modelo;
} veiculo_t;

int main(){

    veiculo_t *novo_carro = malloc(sizeof(veiculo_t));

    /* Verifica se malloc alocou a memória */
    if (novo_carro == NULL){
      perror("malloc de novo_carro");
      exit(EXIT_FAILURE);      
    }

    /* Veja que devemos copiar a string explicitamente
     * para o membro marca */
    strncpy(novo_carro->marca, "Mustang", 64);
    novo_carro->modelo = 2020;

    (...)
}

## Exercícios

- Defina uma nova estrutura, chamada pessoa, que contenha uma string nome e um inteiro idade:

```C
#include <stdio.h>

/* Defina a estrutura pessoa aqui */


int main() {
    struct pessoa john;

    /* testando o código */
    scanf("%s %d", john.nome, &john.idade)

    printf("%s tem %d anos.", john.nome, john.idade);
}
```

- Assumindo a declaração __typdef__ e o vetor de estruturas, complete a função "imprime_dados":

```C
#include <stdio.h>

/* Criação da estrutura utilizando o alias typedef */
typedef struct dados {
     char nome[20];
     float altura;
     float peso;
} pessoa_t;


/* Passagem de parâmetros por vetor para n pessoas */
void entrar_dados(pessoa_t *vetor_dados, int n){
    int i;

    for (i=0; i < n; i++){
        puts("Entre com nome (string), altura (float) e peso(float) separados por espaços");
        scanf("%20s %f %f", vetor_dados[i].nome, &vetor_dados[i].altura, &vetor_dados[i].peso);
    }
}

void imprime_dados(pessoa_t *vetor_dados, int n){

    int i;

    //for (i=0; ...)

}


int main() {
    pessoa_t dados_de_pessoas[10];

    /* Entra com os dados manualmente */
    entrar_dados(dados_de_pessoas, 10);

    imprime_dados(dados_de_pessoas, 10);

    return 0;
}
```
