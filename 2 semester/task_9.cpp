#include <clocale>
#include <iostream>
#include "windows.h"

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n = 100;
    int Array[100];
    int k = 1;
    cout << "One-dimensional array of 100 elements: ";
    cout << endl;

    for (int i = 0; i < 100; i++)
    {
        Array[i] = rand() % 100;
        cout << Array[i] << endl;
    }

    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for (int j = 0; j < n - i - 1; j++)
        {
            if (Array[j] > Array[j + 1])
            {
                int temp = Array[j];
                Array[j] = Array[j + 1];
                Array[j + 1] = temp;
                swapped = true;
            }
        }

        if (swapped == false)
            break;
    }

    cout << "One-dimensional sorted (Bubble sort) array of 100 elements: ";
    cout << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << Array[i] << endl;
    }

    cin.get();
    cin.get();
}