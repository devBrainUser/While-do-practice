#include <iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "rus"); //setting language


	//creating variables
	int valueOfSymbols; 
	char symbol;
	int verticalOrGorizontal; 
	int i = 1; 

	cout << "Введите число символов:"; //asking user for count of symbols
	cin >> valueOfSymbols; //setting variables

	cout << "\n";

	cout << "Введите символ который хотите использовать:"; //asking user for symbol
	cin >> symbol; //setting variables

	cout << "Выберите вид\n1 = вертикальная строка\n2 = горизонтальная строка\n"; //asking user for type of writing
	cin >> verticalOrGorizontal; //setting variables
	
	switch (verticalOrGorizontal)
	{
	case 1:
		while (1) 
		{
			// writing symbol until condition be right
			cout << symbol << endl; 

			if (i == valueOfSymbols) break;

			i++; // incrementing count of itterations
			
		}
	break;

	case 2:
		while (1)
		{
			// writing symbol until condition be right
			cout << symbol ;

			if (i == valueOfSymbols) break;

			i++; // incrementing count of itterations

		}
		break;

	default:
		cout << "Нету такого вида!";
		break;
	}
}