#include <stdio.h>
#include <locale.h>


int main () {
	
	int varA = 10, varB= 20, aux ;
	
aux= varA;
varA= varB;
varB= aux;

printf (" A = %d\nb= %d\n", varA, varB);




setlocale(LC_ALL, "Portuguese");
	
	system("pause");
    return 0;
	
	
	
}


