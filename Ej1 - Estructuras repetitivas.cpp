// Ej1 - estructuras repetitivas

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;


int main()
{
	int i;
	int n;
	int suma = 0;
	i = 1;
	int n1;

	printf("La serie consiste en esto: A = 2 + 4 + 6 + 8...... \n");

	do
	{
	printf("Ingrese el numero de terminos que desee sumar: ");
	cin >> n;


		if (n >= 0)
		{
			while (i <= n)
			{
				suma = suma + (i * 2);
				i++;
			}
			cout << "A = " << suma;

			_getch();
			return 0;
		}
		else
		{
			printf("ERROR \n");
			printf("Ingrese un valor mayor o igual a cero \n");
			cout << endl;
			n1 = 1;
		}
	} 
	while (n1 == 1);


	_getch();
}