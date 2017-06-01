/**
 * Simple Calculator
 * Андрей Васин 
 * andriivasin@gmail.com
 * Калькулятор на операторе switch
 */

#include <iostream>
using namespace std;

int main(void)
{
	while (true)
	{
		// объявление переменных с плавающей точкой? 
		float A, B, RES; 
		cout << "\nPlease, enter the first number:\t\t";
		cin >> A;
		cout << "\nPlease, enter the second number:\t";
		cin >> B;

		// реализация меню
		char key;
		cout << "\n\nWhat operation shall i do?\n";
		cout << "Please, select the + if need the addition\n";
		cout << "Please, select the - if need the subtraction\n";
		cout << "Please, select the * if need the multiplication\n";
		cout << "Please, select the / if need the division\n";

		// выбор операции
		cin >> key;

		// switch
		switch (key)
		{
			case '+': // если выбрано сложение
				RES = A + B;
				cout << "\nResult "<<A<<"+"<<B<<"=" << RES << "\n"; // вывод результата
				break; // остановка switch-а

			case '-': // если выбрано вычетание
				RES = A - B;
				cout << "\nResult " << A << "-" << B << "=" << RES << "\n"; // вывод результата
				break; // остановка switch-а

			case '*': // если выбрано умножение
				RES = A * B;
				cout << "\nResult " << A << "*" << B << "=" << RES << "\n"; // вывод результата
				break; // остановка switch-а

			case '/': // если выбрано деление
				RES = A / B;
				cout << "\nResult " << A << "/" << B << "=" << RES << "\n"; // вывод результата
				break; // остановка switch-а

			default: // введён символ, отличный от четырёх обозначенных, если не указать, не произойдёт ничего
				cout << "\nError. The entered symbol is incorrect.";
				// break; // остановка switch-а, последний break можно не указывать
		}




	}
}