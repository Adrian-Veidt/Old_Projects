/*�������2
Author: ������ ����� andriivasin@gmail.com
������ ������� ��� ����, ����� ������������ ��������� ������ �� �������
*/

#include <iostream>
using namespace std;
void main()
{
	/*�������� ������ ���������� �������� "0" � �������� ������������ ������ ������ �� ��������.
	�������� �� ������������ ����� ������ ���� �� �����
	*/

	//��������� ���������� ����, ��� �����
	float Cost = 0;
	cout << "Please, enter the cost:\t" "\t"; //������ ��������� �� ����������� � � �� ������)))
	cin >> Cost;

	//��������� ���������� ������, ��� �����
	float Discount = 0;
	cout << "Please, enter the discount:\t";
	cin >> Discount;

	//��������� ���������� ����������, ��� ���, ������ ��� ��� ����� �����
	int Count = 5;
	cout << "How many?\t";
	cin >> Count;

	//��������� ���������� �����, ��� �����
	float Price = 0;

	//������� ������� �����
	Price = Cost*(1 - Discount)*Count;

	//������� �����
	cout << "Please, pay: " << Price << "\n\n";

}