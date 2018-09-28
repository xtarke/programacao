#include <stdio.h>

int main(){
	float valor;
	short contagem = 0;
    float total = 0;     
    
    puts("Preço do item:");
	while (scanf("%f", &valor) == 1){
		total = addicionar_com_taxa(valor, total);
        
        printf("Total até agora: %.2f\n\n", total);
		printf("Preço do item: ");
        
        contagem = contagem + 1;
	}

	printf("\nTotal final: %.2f\n", total);
	printf("Número de itens: %hi\n", contagem);

	return 0;
}

float addicionar_com_taxa(float val_item, float total){    
    short percentual = 6;    
    
	float taxa = 1 + percentual / 100.0;
	total = total + (val_item * taxa);	
	
	return total;
}
