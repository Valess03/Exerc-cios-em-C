#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	
	
	int totalEleitores, votosBrancos, votosNulos, votoValidos;
	float percVotosBrancos, percVotosNulos, percVotosValidos;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Informe o total de eleitores:");
	scanf(" %d",  &totalEleitores);
	
	printf("Informe a quantidade de votos brancos:");
	scanf(" %d",  &votosBrancos);
	
	printf("Informe a quantidade de votos nulos:");
	scanf(" %d",  &votosNulos);
	
	printf("Informe o total de votos válidos:");
	scanf(" %d",  &votosValidos);
	
	percVotosBrancos = (votosBrancos * 100) / totalEleitores;
	
	
	system("pause");
	return 0;
}
