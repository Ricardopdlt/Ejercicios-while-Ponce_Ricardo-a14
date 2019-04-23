// Ej5 - estructuras repetitivas

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
	i = 1;
	int n1;
	int n2;
	

	printf("La serie consiste en esto: C = 1/a + 1/a + 1/a + ..... \n");

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
				
					while (i <= n)
					{
						suma = (1*i)/a;
						i++;
					}

					
					cout << "E = " << suma << endl;

					

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