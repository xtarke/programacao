/* Crie uma ferramenta que leia um arquivo csv com o seguinte formato:
 * Anisio Rodrigues Alves,116,M
 * Maria do Carmo Geronimo,129,F
 * Geraldo Tabuleta,111,M
 * (...)
 
 * Seu programa deve gerar dois novos arquivo CSV contendo apenas as pessoas do 
 * sexo feminino e masculino. Utilize o mesmo formato.
 
 * Os nomes do arquivos devem ser passados como argumentos do main:
 * velhinhos.exe dados.csv homens.csv mulheres.csv
 
 * Não esqueça de verificar que os arquivos foram corretamente abertos pela função fopen.
 ***************************************************************************************/


#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){    
    char nome[64];
    int idade;
    char sexo;    
    
    /* Verifica o número de argumentos do main *
     * argv[0]: nome do executável: velhinhos.exe
     * argv[1]: primeiro argumento: dados.csv
     * .... */    
    if (argc < 4){
        fputs("Número insuficientes de argumentos:\n", stderr);
        fputs("Use: velhinhos.exe <dados> <homens> <mulheres>\n", stderr);
        return -1;
    }
    /* Abre cada arquivo */
    FILE *entrada = fopen(argv[1], "r");    
    if (entrada == NULL){
        perror(argv[1]);
        return -1;
    }
    
    FILE *saida_h = fopen(argv[2], "w");    
    if (saida_h == NULL){
        perror(argv[2]);
        return -1;
    }    
    FILE *saida_m = fopen(argv[3], "w");

    if (saida_m == NULL){
        perror(argv[2]);
        return -1;
    }            
    
    while (fscanf(entrada, "%63[^,],%d,%c\n", nome, &idade, &sexo) == 3) {
        if (sexo == 'M')
            fprintf(saida_h, "%s, %d, %c\n", nome, idade, sexo);
        else if (sexo == 'F')
            fprintf(saida_m, "%s, %d, %c\n", nome, idade, sexo);
    }

    fclose(entrada);
    fclose(saida_h);
    fclose(saida_m);

    return 0;
}
