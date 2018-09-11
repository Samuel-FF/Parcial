/*
programa: punto 4
fecha: 11/09/2018
creador: Samuel Fernandez Fernandez
*/
#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string.h>


void mult (float n1, float n2)
{
	float m;
	m = num1 * num2;
	printf ("el resultado es: %.2f\n", m);
}

int main() 
{
	float n3, n4;
	printf ("ingrese el primer numero flotante\n", n3);
	scanf ("%f", &n3);
	printf ("ingrese el segundo numero flotante\n", n4);
	scanf ("%f", &n4);
	
	mult(n3, n4);
	return 0;
}
