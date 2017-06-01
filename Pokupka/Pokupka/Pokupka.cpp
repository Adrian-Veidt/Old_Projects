/*Покупка2
Author: Андрей Васин andriivasin@gmail.com
Проект покупка для ШАГа, будет рассчитывать стоимость товара со скидкой
*/

#include <iostream>
using namespace std;
void main()
{
	/*Назначим каждой переменной значение "0" и попросим пользователя ввести каждое из значений.
	Проверку на корректность ввода делать пока не будем
	*/

	//Объявляем переменную цена, тип флоат
	float Cost = 0;
	cout << "Please, enter the cost:\t" "\t"; //Первая табуляция не срабатывает и я хз почему)))
	cin >> Cost;

	//Объявляем переменную скидка, тип флоат
	float Discount = 0;
	cout << "Please, enter the discount:\t";
	cin >> Discount;

	//Объявляем переменную количество, тип инт, потому что это целое число
	int Count = 5;
	cout << "How many?\t";
	cin >> Count;

	//Объявляем переменную Итого, тип флоат
	float Price = 0;

	//Формула расчёта Итого
	Price = Cost*(1 - Discount)*Count;

	//Выводим Итого
	cout << "Please, pay: " << Price << "\n\n";

}