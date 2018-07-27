#include <stdio.h>

#define FIRST_PART      7 
#define LAST_PART       5 
#define ALL_PARTS       (FIRST_PART + LAST_PART) 

int main() { 
    printf("O quadrado de todas as partes vale %d\n", 
	ALL_PARTS * ALL_PARTS); 
    
#ifdef DEBUG
  printf("##FIRST_PART: %d\n", FIRST_PART);
#endif
    
    
    return (0);
} 
