#include "Header.h"

void Show(map<string, vector<string>>& col)
{
	for (auto i = col.begin(); i != col.end(); ++i)
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "Страна: " << i->first << endl;;
		cout << "-----------------------------------------------------------" << endl;
		cout << "Столица: " << setw(7) << i->second[0] << endl;
		for (int j = 1; j < i->second.size(); j++)
		{
			cout<<setw(16)<< i->second[j] << endl;
		}		
	}
}

void Сountry_creat(map<string, vector<string>> &Сountry)
{
	string Co[5] = { "Россия","Франция","Великробитания","Канада","Китай" };
	vector <string> v1{"Москва", "Санкт_Питербург", "Якутск", "Новосибирск","Владивосток" };
	vector <string> v2{ "Париж", "Ницца", "Марсель", "Лион","Кан", "Антиб" };
	vector <string> v3{ "Лондон", "Ливерпуль", "Манчестер", "Бат","Виндзор", "Оксворд" , "Эндинбург" };
	vector <string> v4{ "Оттава", "Торонто", "Галифакс", "Ванкувер","Монреаль", "Эдмонтон" , "Квебек", "Виндзор" };
	vector <string> v5{ "Пекин", "Санья", "Шеньчжень", "Шанхай","Гуанчжоу", "Харбин" , "Макао", "Далянь", "Ханчжоу" };

	vector <string> v_all [5] = { v1,v2,v3,v4,v5 };

	for (int i = 0; i < 5; i++)
	{
		Сountry.insert(make_pair(Co[i], v_all[i]));
	}

	
}

void Search_c(map<string, vector<string>>& Сo, string Cou[])
{
	string s;
	bool key = 1;
	auto iter = Сo.begin();
	
	do
	{
		system("cls");
		iter = Сo.begin();
		cout << "Введите страну: "; cin >> s; cout << endl;

		for (int i = 0; i < Сo.size(); i++)
		{
			if (s== Cou[i])
			{
				iter = Сo.find(s);
				cout << "-----------------------------------------------------------" << endl;
				cout << "Страна: " << iter->first << endl;
				cout << "-----------------------------------------------------------" << endl;
				cout << "Столица: " << iter->second[0] << endl;
				cout << "-----------------------------------------------------------" << endl;
				key = 0; break;
			}
		}
		if (key == 0) break;

		else
		{
			cout << "Страна не найдена" << endl;
			cout << "Возобновить ввод?\n1 - Да\n0 - Выйти" << endl;
			cout << "Enter: "; cin >> key;
		}
		
	} while (key);

}

void Search_s(map<string, vector<string>>& Сo)
{

	string s;
	bool key = 1;
	
	do
	{
		system("cls");
		cout << "Введите город: "; cin >> s; cout << endl;
		for (auto i = Сo.begin(); i != Сo.end(); ++i)
		{
			for (int j = 0; j < i->second.size(); j++)
			{
				if (i->second[j] == s)
				{

					cout << "-----------------------------------------------------------" << endl;
					cout << "Страна: " << i->first << endl;
					cout << "-----------------------------------------------------------" << endl;
					cout << "Столица: " << i->second[0] << endl;
					cout << "-----------------------------------------------------------" << endl;
					key = 0; break;
				}
			}
		}
		if (key == 0) break;
		else
		{
			cout << "Город не найден" << endl;
			cout << "Возобновить ввод?\n1 - Да\n0 - Выйти" << endl;
			cout << "Enter: "; cin >> key;
		}
	} while (key);
	
	
}

void Show_h()
{
	cout << "1 - Вывод данных" << endl;
	cout << "2 - Поиск по стране" << endl;
	cout << "3 - Поиск по городу" << endl;
	cout << "0 - Выход" << endl;
}
