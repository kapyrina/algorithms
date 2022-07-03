#include <clocale>
#include <iostream>
#include "windows.h"

using namespace std;

int interpolSearch(int Array[], int argSearch) {
	int low = 0, high = 100 - 1, mid;

	while (Array[low] <= argSearch && Array[high] >= argSearch)
	{
		mid = low + ((argSearch - Array[low]) * (high - low)) / (Array[high] - Array[low]);
		if (Array[mid] < argSearch)
		{
			low = mid + 1;
		}
		else if (Array[mid] > argSearch)
		{
			high = mid - 1;
		}
		else
		{
			break;
		}
	}
	if (Array[low] == argSearch) {
		return low;
	}
	else {
		return -1;
	}
}

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	int n, argSearch;
	int Array[100];
	cout << "Одномерный массив из 100 элементов: ";
	cout << endl;

	for (int i = 0; i < 100; i++)
	{
		Array[i] = rand() % 100;
		cout << Array[i] << endl;
	}

	for (int i = 0; i < 100 - 1; i++) {
		for (int j = 0; j < 100 - i - 1; j++) {
			if (Array[j] > Array[j + 1]) {
				int temp = Array[j];
				Array[j] = Array[j + 1];
				Array[j + 1] = temp;
			}
		}
	}

	cout << endl;

	for (int i = 0; i < 100; i++)
	{
		cout << Array[i] << endl;
	}

	cout << endl;

	cout << "Введите число для поиска: ";
	cin >> argSearch;

	if (interpolSearch(Array, argSearch) == -1)
	{
		cout << "\nРезультат поиска " << argSearch << " не найден в массиве." << endl;
	}
	else
	{
		cout << "\nРезультат поиска " << argSearch << " найден в массиве с индексом " << interpolSearch(Array, argSearch) + 1 << "." << endl;
	}

	cin.get();
	cin.get();
}
