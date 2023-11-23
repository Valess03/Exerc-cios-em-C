#include <stdio.h>
#include <locale.h>



int main (){
	
	float peso, altura, imc;
	
	printf("Informe o peso:");
	scanf(" %f", &peso);
	
	printf("Informe a altura:");
	scanf(" %f", &altura);
	
	imc = peso /(altura * altura ); 
	printf (" O resultado do imc e´: %.2f\n", imc);
	
	setlocale(LC_ALL, "Portuguese");
	
	system("pause");
    return 0;
}
