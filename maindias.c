#include <stdio.h>
#include <locale.h>


int main () {
	
	
	int anos, dias, meses, totalDias;
	
	setlocale(LC_ALL, "Portuguese");
	
	
	printf ("Informe os anos");
	scanf("%d", &anos);
	
	printf ("Informe os meses");
	scanf("%d", &meses);
	
	printf ("Informe os dias");
	scanf("%d", &dias);
	
	totalDias= (anos * 365)+ (meses * 30) + dias;
	printf("Total de dias: %d\n",  totalDias);

	
	system ("pause");
	return 0; 
}

