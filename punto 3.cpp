/*
programa: punto 3
fecha:11/09/2018
creador: Samuel fernandez Fernandez
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>


int main()
{
	char num1[100], num2[100];
	int long1=0, long2=0;
	printf("ingrese el nombre de la primera persona\n");
	gets(num1);
	printf("ingrese el nombre de la segunda persona\n");
	gets(num2);
	long1=strlen(num1);
	long2=strlen(num2);
	
	
	if(long1>long2)
	{
		printf("tiene mas caracteres : %s\n", num2);
		printf("tiene menos caracteres : %s\n", num1);
	}
	else
	   {
		printf("tiene mas caracteres : %s\n", num2);
		printf("tiene menos caracteres : %s\n", num1);
	   }
	
}
