/**
 * Simple Calculator
 * ������ ����� 
 * andriivasin@gmail.com
 * ����������� �� ��������� switch
 */

#include <iostream>
using namespace std;

int main(void)
{
	while (true)
	{
		// ���������� ���������� � ��������� ������? 
		float A, B, RES; 
		cout << "\nPlease, enter the first number:\t\t";
		cin >> A;
		cout << "\nPlease, enter the second number:\t";
		cin >> B;

		// ���������� ����
		char key;
		cout << "\n\nWhat operation shall i do?\n";
		cout << "Please, select the + if need the addition\n";
		cout << "Please, select the - if need the subtraction\n";
		cout << "Please, select the * if need the multiplication\n";
		cout << "Please, select the / if need the division\n";

		// ����� ��������
		cin >> key;

		// switch
		switch (key)
		{
			case '+': // ���� ������� ��������
				RES = A + B;
				cout << "\nResult "<<A<<"+"<<B<<"=" << RES << "\n"; // ����� ����������
				break; // ��������� switch-�

			case '-': // ���� ������� ���������
				RES = A - B;
				cout << "\nResult " << A << "-" << B << "=" << RES << "\n"; // ����� ����������
				break; // ��������� switch-�

			case '*': // ���� ������� ���������
				RES = A * B;
				cout << "\nResult " << A << "*" << B << "=" << RES << "\n"; // ����� ����������
				break; // ��������� switch-�

			case '/': // ���� ������� �������
				RES = A / B;
				cout << "\nResult " << A << "/" << B << "=" << RES << "\n"; // ����� ����������
				break; // ��������� switch-�

			default: // ����� ������, �������� �� ������ ������������, ���� �� �������, �� ��������� ������
				cout << "\nError. The entered symbol is incorrect.";
				// break; // ��������� switch-�, ��������� break ����� �� ���������
		}




	}
}