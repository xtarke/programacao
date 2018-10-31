#include <stdio.h>
#include <string.h>
 
typedef struct livros {
   char titulo[50];
   char autor[50];
   char assunto[100];
   int livro_id;
} livro_t;
 
int main( ) {

   livro_t livro_01;
 
   strcpy( livro_01.titulo, "Programacao C");
   strcpy( livro_01.autor, "Nuha Ali"); 
   strcpy( livro_01.assunto, "Tutorial de Programacao C");
   livro_01.livro_id = 6495407;
 
   printf( "Titulo : %s\n", livro_01.titulo);
   printf( "Autor : %s\n", livro_01.autor);
   printf( "Assunto : %s\n", livro_01.assunto);
   printf( "ID : %d\n", livro_01.livro_id);

   return 0;
} 
