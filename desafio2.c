/* GERADOR DE SENHAS DO PROG2 
 * Intervalo de senhas: Valores pares entre 1362 e 1384 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Retorna um número aleatório entre min e max. */
int aleat(int min, int max);

int main(){

	time_t t;
	int senha;
	
	srand((unsigned) time(&t));
	senha = -1;

	while(senha % 2 != 0){
		senha = aleat(1362,1385);
	}

	printf("Senha gerada: %d\n", senha);

	return 0;
}

int aleat(int min, int max){
	int n;
	n = (rand() % (max-min+1))+min;
	return n;
}

