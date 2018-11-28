/*
 ============================================================================
 Name        : graficos.c
 Author      : Renan Augusto Starke
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#define ISCR 80
#define JSCR 21
#define BRANCO ' '
#define ZERO '-'
#define YY '|'
#define XX '-'
#define FF '.'

float quadrado(float);
float seno(float x);

void desenha_graficomain(float funcao_dados(float), float x_min, float x_max);

int main(){
	float x1, x2;

	printf("\nEntre com x1 e x2 separados por espaço\n");
	printf("\nx1=x2 para parar:\n");
	scanf("%f %f",&x1,&x2);

	desenha_graficomain(quadrado, x1,x2);

	desenha_graficomain(seno, x1,x2);

}


/*********************************************************************
   Para uso iterativo no terminal. Produz um gráfico simples de fun
   para o intervalo x1, x2. Permite plotar outro gráfico até a satis-
   fação do usuário.
   Adaptado de:
   PRESS, William H. Press et alii. Numerical recipes in C : the art
   of scientific computing.Cambridge University Press, 1992
*********************************************************************/

void desenha_graficomain(float funcao_dados(float), float x_min, float x_max)
{
    int jz,j,i;
    float ysml,ybig,x,dyj,dx,y[ISCR+1];

    char scr[ISCR+1][JSCR+1];

	for (j=1; j<=JSCR; j++)
		scr[1][j]=scr[ISCR][j]=YY;

	for (i=2; i<=(ISCR-1); i++)	{
		scr[i][1]=scr[i][JSCR]=XX;
		for (j=2; j<=(JSCR-1); j++)
			scr[i][j]=BRANCO;
	}

	dx=(x_max-x_min)/(ISCR-1);
	x=x_min;
	ysml=ybig=0.0;

	for (i=1; i<=ISCR; i++) 	{
		y[i] = funcao_dados(x);
		if (y[i] < ysml) ysml=y[i];
		if (y[i] > ybig) ybig=y[i];
		x += dx;
	}

	if (ybig == ysml)
		ybig=ysml+1.0;

	dyj=(JSCR-1)/(ybig-ysml);
	jz=1-(int) (ysml*dyj);

	for (i=1; i<=ISCR; i++)	{
		scr[i][jz]=ZERO;
		j=1+(int) ((y[i]-ysml)*dyj);
		scr[i][j]=FF;
	}
	printf(" %10.3f ",ybig);

	for (i=1; i<=ISCR; i++)
		printf("%c",scr[i][JSCR]);

	printf("\n");
	for (j=(JSCR-1); j>=2; j--)
	{
		printf("%12s"," ");
		for (i=1; i<=ISCR; i++)
			printf("%c",scr[i][j]);
		printf("\n");
	}
	printf(" %10.3f ",ysml);

	for (i=1; i<=ISCR; i++)
		printf("%c",scr[i][1]);
	printf("\n");
	printf("%8s %10.3f %44s %10.3f\n"," ",x_min," ",x_max);

}

/* Exemplo de função quadrado *
 * Você pode utilizar qualer função
 * desde que receba e retorne um
 * float  */
float quadrado(float x)
{
    return x*x;
}

float seno(float x){
	return sin(x);
}

