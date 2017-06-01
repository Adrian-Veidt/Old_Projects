/*Покупка
Author: Андрей Васин andriivasin@gmail.com
Проект покупка для ШАГа, будет рассчитывать стоимость товара со скидкой
*/

#include <iostream>
using namespace std;
void main()
{
	//Объявляем переменную цена, тип флоат
	float Cost = 10.5;

	//Объявляем переменную скидка, тип флоат
	float Discount = 0.05;

	//Объявляем переменную количество, тип инт, потому что это целое число
	int Count = 5;

	//Объявляем переменную Итого, тип флоат
	float Price = 0;

	//Формула расчёта Итого
	Price = Cost*(1 - Discount)*Count;

	//Выводим Итого
	cout << "Please, pay: " << Price << "\n\n";

}