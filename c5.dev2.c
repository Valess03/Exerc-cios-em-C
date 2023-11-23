#include <stdio.h>
#include <stdlib.h>
#include <locale.h>



int main() {
	
	float base, altura, area;
	setlocale (LC_ALL, " Portuguese");
	
	printf ("Informe o valor da base:");
	scanf ("%f", &base);
	
	printf ("Informe o valor da altura:");
	scanf ("%f", &altura);
	
	area= base* altura;
	printf(" O valor da área é: %.2f\n", area);
	
	
	
	system("pause");
	
	
	return 0;
}
