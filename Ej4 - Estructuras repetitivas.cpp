// Ej4 - estructuras repetitivas

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;



int main()
{
	int i;
	int n;
	int a;
	int suma = 0;
	i = 1;
	int n1;
	int n2;
	int suma1;

	printf("La serie consiste en esto: C = a + 3a + 6a + 9a..... \n");

	do
	{
		printf("Ingrese a : ");
		cin >> a;


		if (a >= 0)
		{

			do
			{

				printf("Ingrese el numero de terminos que desee sumar: ");
				cin >> n;

				if (n >= 0)
				{
					if (n == 1)
					{
						suma = a;
						cout << "D = " << suma << endl;
					}
					if (n > 1)
					{
						while (i <= n)
						{
							suma = suma + (a * (i - 1) * 3);
							i++;
						}

						suma1 = a + suma;
						cout << "D = " << suma1 << endl;

					}

					_getch();
					return 0;
				}
				if (n < 0)
				{
					printf("ERROR \n");
					printf("Ingrese un valor mayor o igual a cero \n");
					cout << endl;
					n2 = 1;
				}
			} while (n2 == 1);


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