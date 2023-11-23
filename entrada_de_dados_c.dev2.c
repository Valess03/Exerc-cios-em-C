#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

int dado = 10;
printf("Dado antes do incremento: %d.\n");

dado ++;
printf("Depois do incremento: %d.\n",dado);

dado --;
printf("Depois do decremento: %d.\n",dado);

dado += 3;
printf("Depois do incremento em 3 unidades: %d.\n",dado);

dado -= 2;
printf("Depois do incremento em 2 unidades: %d.\n",dado);

dado *= 10;
printf("Depois de multiplicar por 10: %d.\n",dado);


}
