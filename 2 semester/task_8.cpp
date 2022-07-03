#include <clocale>
#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int recursFindWord(string Array[], string keyWord, int Ind)
{
	if (Array[Ind] != keyWord)
	{
		Ind++;
		return recursFindWord(Array, keyWord, Ind);
	}
	else
	{
		return Ind + 1;
	}
}

int main()
{
	int Ind = 0;
	string  keyWord;
	string Array[20] =
	{
		"Scott",
		"Klaus",
		"Marty",
		"Jules",
		"Michael",
		"Vi",
		"Tyler",
		"Turkish",
		"Alexey",
		"Shurik",
		"James",
		"Aldo",
		"Fox",
		"JD",
		"Igor",
		"Jack",
		"Gustave",
		"Jay",
		"Elton",
		"Holland"
	};

	for (int i = 0; i < 20; i++)
	{
		cout << Array[i] << endl;
	}

	cout << "Enter a name to search in massive: ";
	cin >> keyWord;

	Ind = recursFindWord(Array, keyWord, Ind);

	if (Ind != 21)
	{
		cout << "Name " << keyWord << " in massive located on the " << Ind << " place.";
	}
	else
	{
		cout << "Name " << keyWord << " in massive not found";
	}

	cin.get();
	cin.get();
}