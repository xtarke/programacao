#include <stdio.h>

struct status {
    unsigned int data :4;  // campo de 4 bits sem sinal
    unsigned int cts  :1;  // campo de 1 bit
    unsigned int dsr  :1;  // campo de 1 bit
};


struct example1
{
    int isMemoryAllocated;
    int isObjectAllocated;
};

struct example2
{
    int isMemoryAllocated : 1;
    int isObjectAllocated : 1;
};



int main(void)
{
    struct status st;
    
    /* data: valores de 0 a 15 */ 
    st.data = 2;
    /* cst e dsr: apenas 0 e 1 */
    st.cts = 0;
    st.dsr = 1;    
    
    printf("sizeof example1 é [%u] bytes, sizeof example2 é [%u] bytes\n",
           sizeof(struct example1), sizeof(struct example2));
    
    printf("struct status com tamanho: %u bytes\n",
           sizeof(st));    

    return 0;
} 
