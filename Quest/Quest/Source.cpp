/*Simple Quest
Author Андрей Васин andriivasin@gmail.com
пример для ШАГа, примитивный квест на условных операторах.
*/

#include <iostream>
using namespace std;

void main()
{
//	while (1)	{
		// Добро пожаловать. Три испытания чести. Злой маг похитил
		//принцессу и ее судьба в твоих руках. Он предлагает тебе
		//пройти 3 испытания чести в его лабиринте.

		cout << "Wellcome.\nThe malicious magician have kidnapped the princess.\nHer destiny in your hands.\nYou should pass three tests of honour in this labyrinth to rescue her.\n\n";

		bool goldTaken, diamondsTaken, killByDragon;

		//Ты входишь в первую комнату, здесь очень много золота.
		cout << "You enter into the first room, there is a lot of gold.\n\n";

		//Возьмешь ли ты его? 
		cout << "Will you take it?(1-yes, 0-no)\n\n";
		cin >> goldTaken;
		if (goldTaken) // если возьмешь
		{
			//Золото остается тебе, но ты провалил испытание. ИГРА ОКОНЧЕНА!!!
			cout << "You will keep gold, but you have failed the test.\n\t GAME OVER!!!\n\n";
		}
		else // если нет
		{
			//Поздравляю, ты прошел первое испытание чести!
			cout << "Congratulations, you have passed the first test!\n\n";

			//Ты переходишь в следующую комнату. Она полна бриллиантов
			cout << "You enter the next room. It is full of diamonds.\n\n";

			//Возьмешь ли ты бриллианты?
			cout << "Whether you will take them? (1-yes,0-no)\n\n";
			cin >> diamondsTaken;
			if (diamondsTaken)// если возьмешь
			{
				//Бриллианты остаются тебе, но ты провалил второе испытание
				cout << "Now you have a diamonds, but you have failed the test.\n\t GAME OVER!!!\n\n";


			}
			else //если нет
			{
				//Поздравляю, ты прошел второе испытание чести!!!
				cout << "Congratulations, you have passed the second test!\n\n";

				//Ты входишь в третью комнату.
				cout << "You enter into the third room. \n\n";

				//На крестьянина напал дракон! Двигаться дальше
				cout << "There is a person attacked by dragon! Will you move further \n\n";

				//не обращая на них внимания
				cout << "without paying attention to them? (1-yes,0-no)\n\n";
				cin >> killByDragon;
				if (killByDragon)//если возьмешь
				{
					//Ты пытаешься проскользнуть мимо, но дракон
					cout << "You try to sneak past, but dragon \n\n";

					//замечает твое присутствие.
					cout << "notices your presence\n\n";

					//Oн превращает тебя в пепел. Ты мертв!!!
					cout << "It incinerate you into ashes. You are dead!!!\n\n";

					//ИГРА ОКОНЧЕНА!!!
					cout << "\t GAME OVER!!!\n\n";

				}
				else//если нет
				{
					//Поздравляю, ты с честью прошел все испытания!!!
					cout << "You fight and kill the dragon.\nCongratulations, you clear all the tests with honour!!!\n\n";

					//Принцесса достается тебе!!!
					cout << "You saved the princess!!!\n\n\tThe END.\n\n\n\n";
				}
			}
		}

	}
//}
