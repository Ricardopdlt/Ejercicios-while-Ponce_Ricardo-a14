// Ej6 - estructuras repetitivas

#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;



int main()
{
	int i;
	int n;
	float a;
	float suma = 0;
	i = 2;
	int n1;
	int n2;
	float suma1;

	printf("La serie consiste en esto: C = 1/a + 1/3a + 1/6a + 1/9a + ..... \n");

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
						suma = 1/a;
						cout << "F = " << suma << endl;
					}
					if (n > 1)
					{
						while (i <= n)
						{
							suma = suma + 1/(a*(i-1)*3);
							i++;
						}

						suma1 = (1/a) + suma;
						cout << "F = " << suma1 << endl;

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