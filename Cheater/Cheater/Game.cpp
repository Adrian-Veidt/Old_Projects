/*Cheater
Author: Андрей Васин andriivasin@gmail.com
Программа для Шага, "угадывает" число.
*/

#include <iostream>
using namespace std;

void main()

{
	cout << "Let`s play!\n"; //Приглашение поиграть

	int i = 0; //Объявление переменной, я сразу дал ей значение ноль

	cout << "Please, enter the number. Those who have bigger - wins:\t";

	cin >> i; //ВВод числа
	
	cout << "\nI have: " << i + 1 << "\n";
	cout << "I`m winner!\n\n";
}