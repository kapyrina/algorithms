#include <clocale>
#include <iostream>
#include "windows.h"

using namespace std;

void merge(int merged[], int lenD, int L[], int lenL, int R[], int lenR)
{
    int i = 0;
    int j = 0;
    while (i < lenL || j < lenR)
    {
        if (i < lenL && j < lenR)
        {
            if (L[i] <= R[j])
            {
                merged[i + j] = L[i];
                i++;
            }
            else
            {
                merged[i + j] = R[j];
                j++;
            }
        }
        else if (i < lenL)
        {
            merged[i + j] = L[i];
            i++;
        }
        else if (j < lenR)
        {
            merged[i + j] = R[j];
            j++;
        }
    }
}

void mergeSort(int data[], int lenD)
{
    if (lenD > 1)
    {
        int middle = lenD / 2;
        int rem = lenD - middle;
        int* L = new int[middle];
        int* R = new int[rem];
        for (int i = 0; i < lenD; i++)
        {
            if (i < middle)
            {
                L[i] = data[i];
            }
            else
            {
                R[i - middle] = data[i];
            }
        }
        mergeSort(L, middle);
        mergeSort(R, rem);
        merge(data, lenD, L, middle, R, rem);
    }
}

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

    mergeSort(Array, 100);

    cout << "One-dimensional sorted (Bose-Nelsone sort) array of 100 elements: ";
    cout << endl;

    for (int i = 0; i < 100; i++)
    {
        cout << Array[i] << endl;
    }

    cin.get();
    cin.get();
}