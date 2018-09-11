/*
program: punto 5 
fecha: 11/09/2018
creador: Samuel Fernandez Fernandez
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


void funpot(int x, int y)
{
	
	long resultado = 1;
	for (int i = 1; i <= y; i++)
	{
		resultado *= x;
	}
	printf("el resultado es: %d\n", resultado);
}

int main()
{
	int numero, potencia;
	printf("ingrese un numero: ");
	scanf ("%d", &numero);
	printf("ingrese a que potencia quiere elevar del numero: ");
	scanf ("%d", &potencia);
	funpot(numero, potencia);
	
	
	return 0;
}
