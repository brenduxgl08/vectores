#include <iostream>
#include <string>
using namespace std;

int main()
{
	int numero[5]; //Array o vector de 5 números
	int suma; // Un entero que guardará la suma
	suma = 0;
	for (int i = 0; i <= 5; i++)
	{
		cout << "Introduce un numero: ";
		cin >> numero[i];
		suma = suma + numero[i];
	}
	cout << "La suma es: " << suma;
	return 0;
}