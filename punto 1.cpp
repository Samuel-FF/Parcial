/*
programa: punto 1
fecha: 11/09/2018
creador: Samuel Fernandez Fernandez
*/
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>

void operacion(int num1, int num2);
	
int main()
{
	int var1, var2;
	char r;
	
	do
	{
	printf("ingrese el numero de preguntas realizadas\n");
	scanf("%d", &var1);
	printf("ingrese el numero de preguntas acertadas\n");
	scanf("%d", &var2);
	operacion(var1,var2);
	printf("desea realizar otro calculo? \n");
	fflush(stdin);
	scanf("%c", &r);
	
	}while(r=!'y');

}

void operacion(int num1, int num2)
{
	float porcentaje;
	porcentaje = (num2*100)/num1;
	
	if(porcentaje>=85)
	{
		printf("aprobo con nivel maximo de : %2f\n ", porcentaje);
	}
	else
	{
		if(porcentaje >=70 && porcentaje<85)
		{
		printf(" aprobo con nivel medio de : %2f\n", porcentaje);
		}
			else
			{
				if (porcentaje >=40 && porcentaje <70)
				{
				printf("aprobo con nivel medio de : %2f\n", porcentaje);
				}
			
				else
				{
					if(porcentaje <40)
					{
					printf("esta fuera del nivel con : %2f\n", porcentaje);
					}
				}
		}
				
		
	}
	
}
