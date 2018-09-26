#include <stdio.h>

float addicionar_com_taxa(float val_item, float total){    
    short percentual = 6;    
    
	float taxa = 1 + percentual / 100.0;
	total = total + (val_item * taxa);	
	
	return total;
} 
