#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
          
    FILE *fp = fopen("caca.txt", "r");

    
    perror("fopen");      
    
    printf("Em errro?  %d\n", ferror(fp)); 
  
}
