#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main () {
	
	int valor; 	
setlocale(LC_ALL, "Portuguese")	;
printf ("Informe o valor:");
scanf("%d", &valor);

 printf (" Sucessor= %d e Antecessor = %d\n", valor +1, valor- 1);

system("pause");
return 0 ; 

	
	
	
	
}
