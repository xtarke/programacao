/******************************************************************************
 * Implemente a função "palindromo" que verifica se uma string é um palíndromo. 
 * Uma string é um palíndromo, se, e somente, puder ser lida tanto da esquerda 
 * para direita quanto da direita para esquerda. Ex. ovo. 
 * ****************************************************************************/

#include <stdio.h>
#include <string.h>


/**
  * @brief  Verifica se uma string sem espaços é um palíndromo
  * @param	texto: uma string
  *
  * @retval int verdadeiro se palíndromo, falso caso contrário
  */
int palindromo(char *texto){

	int i,j = strlen(texto) - 1;

    /* Compara todos as letras começando
     * pela frente e pelo final da string */
	for (i=0; i < j; i++, j--){
		if (texto[i] != texto[j]){
			return 0;
		}
	}

	return 1;
}


int main(){

	char buffer[64];

	puts("Digite uma palavra:");
	scanf("%63s", buffer);

	printf("Palíndromo de %s:  %d\n", buffer,palindromo(buffer));

	return 0;
}
