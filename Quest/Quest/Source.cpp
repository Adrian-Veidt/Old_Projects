/*Simple Quest
Author ������ ����� andriivasin@gmail.com
������ ��� ����, ����������� ����� �� �������� ����������.
*/

#include <iostream>
using namespace std;

void main()
{
//	while (1)	{
		// ����� ����������. ��� ��������� �����. ���� ��� �������
		//��������� � �� ������ � ����� �����. �� ���������� ����
		//������ 3 ��������� ����� � ��� ���������.

		cout << "Wellcome.\nThe malicious magician have kidnapped the princess.\nHer destiny in your hands.\nYou should pass three tests of honour in this labyrinth to rescue her.\n\n";

		bool goldTaken, diamondsTaken, killByDragon;

		//�� ������� � ������ �������, ����� ����� ����� ������.
		cout << "You enter into the first room, there is a lot of gold.\n\n";

		//�������� �� �� ���? 
		cout << "Will you take it?(1-yes, 0-no)\n\n";
		cin >> goldTaken;
		if (goldTaken) // ���� ��������
		{
			//������ �������� ����, �� �� �������� ���������. ���� ��������!!!
			cout << "You will keep gold, but you have failed the test.\n\t GAME OVER!!!\n\n";
		}
		else // ���� ���
		{
			//����������, �� ������ ������ ��������� �����!
			cout << "Congratulations, you have passed the first test!\n\n";

			//�� ���������� � ��������� �������. ��� ����� �����������
			cout << "You enter the next room. It is full of diamonds.\n\n";

			//�������� �� �� ����������?
			cout << "Whether you will take them? (1-yes,0-no)\n\n";
			cin >> diamondsTaken;
			if (diamondsTaken)// ���� ��������
			{
				//���������� �������� ����, �� �� �������� ������ ���������
				cout << "Now you have a diamonds, but you have failed the test.\n\t GAME OVER!!!\n\n";


			}
			else //���� ���
			{
				//����������, �� ������ ������ ��������� �����!!!
				cout << "Congratulations, you have passed the second test!\n\n";

				//�� ������� � ������ �������.
				cout << "You enter into the third room. \n\n";

				//�� ����������� ����� ������! ��������� ������
				cout << "There is a person attacked by dragon! Will you move further \n\n";

				//�� ������� �� ��� ��������
				cout << "without paying attention to them? (1-yes,0-no)\n\n";
				cin >> killByDragon;
				if (killByDragon)//���� ��������
				{
					//�� ��������� ������������� ����, �� ������
					cout << "You try to sneak past, but dragon \n\n";

					//�������� ���� �����������.
					cout << "notices your presence\n\n";

					//O� ���������� ���� � �����. �� �����!!!
					cout << "It incinerate you into ashes. You are dead!!!\n\n";

					//���� ��������!!!
					cout << "\t GAME OVER!!!\n\n";

				}
				else//���� ���
				{
					//����������, �� � ������ ������ ��� ���������!!!
					cout << "You fight and kill the dragon.\nCongratulations, you clear all the tests with honour!!!\n\n";

					//��������� ��������� ����!!!
					cout << "You saved the princess!!!\n\n\tThe END.\n\n\n\n";
				}
			}
		}

	}
//}
