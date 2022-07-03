#include <clocale>
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	short int n;
	long int sumPol = 0, sumOtr = 0;
	cout << "Введите количество элемнтов массива (не больше 100): ";
	cin >> n;
	long int Array[100];
	cout << "Одномерный массив из " << n << " элементов: ";
	cout << endl;
	for (int i = 0; i < n; i++)
	{
		Array[i] = rand() % ((50000000 + 50000000 + 1) + (-50000000));
		cout << Array[i] << " ";

		if (Array[i] < 0)
		{
			sumOtr += Array[i];
		}
		else
		{
			sumPol += Array[i];
		}
	}
	cout << endl;
	cout << "Сумма отрицательных элементов массива: " << sumOtr << endl;
	cout << "Сумма положительных элементов массива: " << sumPol << endl;
	cin.get();
	cin.get();
}