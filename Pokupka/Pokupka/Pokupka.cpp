/*�������
Author: ������ ����� andriivasin@gmail.com
������ ������� ��� ����, ����� ������������ ��������� ������ �� �������
*/

#include <iostream>
using namespace std;
void main()
{
	//��������� ���������� ����, ��� �����
	float Cost = 10.5;

	//��������� ���������� ������, ��� �����
	float Discount = 0.05;

	//��������� ���������� ����������, ��� ���, ������ ��� ��� ����� �����
	int Count = 5;

	//��������� ���������� �����, ��� �����
	float Price = 0;

	//������� ������� �����
	Price = Cost*(1 - Discount)*Count;

	//������� �����
	cout << "Please, pay: " << Price << "\n\n";

}