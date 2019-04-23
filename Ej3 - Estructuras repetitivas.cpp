// Ej3 - estructuras repetitivas

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

	printf("La serie consiste en esto: C = a + 2a + 4a ..... \n");

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
						cout << "C = " << suma << endl;
					}
					if (n > 1)
					{
						while (i <= n)
						{
							suma = suma + (a * (i-1) * 2);		
							i++;
						}

						suma1 = a + suma;
						cout << "C = " << suma1 << endl;
						
					}

					_getch();
					return 0;
				}
				if (n <0)
				{
					printf("ERROR \n");
					printf("Ingrese un valor mayor o igual a cero \n");
					cout << endl;
					n2 = 1;
				}
			} 
			while (n2 == 1);

		
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