#include <stdio.h>
#include <string.h>


/* Lista das musicas do sue Jukebox */
char musicas[][80] = { 
  "I left my heart in Harvard med school",
  "Newark, Newark - a wonderful town",
  "Dacing with the a Dork",
  "From here to maternity",
  "The girl from Iwo Jima",
};

/* Função para encontrar um texto dentro da lista de musicas */
void encontrar_musica(char *texto){
    
    int i;
    
    for (i=0; i < 5; i++)
        if (strstr(musicas[i], texto))
            printf("Musica %i: '%s'\n", i, musicas[i]);
    
}


/* Função main: todo programa C deve ter uma */
int main() {
    
    
    
}


/* Exemplos de funções main: apena uma está correta. */

/*******************************************
int main(){
   char texto[80];
   
   puts("Buscar musica:");
   fgets(texto, 80, stdin);
   encontrar_musica();
   
   return 0;   
}

*********************************************

int main(){
   char texto[80];
   
   puts("Buscar musica:");
   fgets(texto, 80, stdin);
   encontrar_musica(texto);
   
   return 0;   
}

*********************************************

int main(){
   char texto[80];
   
   puts("Buscar musica:");
   fgets(texto, 79, stdin);
   encontrar_musica(texto);
   
   return 0;   
}

*********************************************

int main(){
   char texto[80];
   
   puts("Buscar musica:");
   scanf(texto, 80, stdin);
   encontrar_musica(texto);
   
   return 0;   
}


************************************************/
