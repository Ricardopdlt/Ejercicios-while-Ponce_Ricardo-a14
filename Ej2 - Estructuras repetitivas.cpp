// Ej2 - estructuras repetitivas

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

	printf("La serie consiste en esto: B = 1 + 4 + 9 + 16 ...... \n");

	do
	{
		printf("Ingrese el numero de terminos que desee sumar: ");
		cin >> n;


		if (n >= 0)
		{
			while (i <= n)
			{
				suma = suma + (i * i);
				i++;
			}
			cout << "B = " << suma;

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
	} while (n1 == 1);


	_getch();
}