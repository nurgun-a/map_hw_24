#include "Header.h"

void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char k;
	bool key1 = 1;
	map<string, vector<string>> Сountry;
	string Cou[5] = { "Россия","Франция","Великробитания","Канада","Китай" };
	Сountry_creat(Сountry,Cou);

	do
	{		
		Show_h();
		cout << "Enter: "; cin >> k;	
		system("cls");
		if (k<'0' || k>'5')
		{
			cout << "Ошибка, введены некорректные данные" << endl;
		}
		else
		{
			switch (k)
			{
				case '1':
				{
					Show(Сountry);
					_getch();
					system("cls");
				}break;
				case '2':
				{
					Search_c(Сountry);
				}break;
				case '3':
				{
					Search_city(Сountry);
				}break;
				case '4':
				{
					Add(Сountry);
				}break;
				case '5':
				{
					Del(Сountry);
				}break;
				case '0':
				{
					key1 = 0;
				}break;
			default:
				break;
			}
		}
	} while (key1);
	
}