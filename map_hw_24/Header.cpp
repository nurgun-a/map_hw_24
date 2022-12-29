#include "Header.h"

void Show(map<string, vector<string>>& col)
{
	for (auto i = col.begin(); i != col.end(); ++i)
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "Страна: " << i->first << endl;;
		cout << "-----------------------------------------------------------" << endl;
		cout << setw(3) << 1 << ")" << "Столица: " << setw(7) << i->second[0] << endl;
		for (int j = 1; j < i->second.size(); j++)
		{
			cout << setw(3) <<j+1<<")" << setw(16) << i->second[j] << endl;
		}		
	}
}

void Сountry_creat(map<string, vector<string>> &Сountry, string Co[])
{
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

void Search_c(map<string, vector<string>>& Сo)
{
	string s;
	bool key = 1;
	auto iter = Сo.begin();
	
	do
	{
		system("cls");
		iter = Сo.begin();
		cout << "Введите страну: "; cin >> s; cout << endl;
		if (Сo.count(s))
		{
			iter = Сo.find(s);
			cout << "-----------------------------------------------------------" << endl;
			cout << "Страна: " << iter->first << endl;
			cout << "-----------------------------------------------------------" << endl;
			cout << "Столица: " << iter->second[0] << endl;
			cout << "-----------------------------------------------------------" << endl;
			key = 0; break;
		}
		else
		{
			cout << "Страна не найдена" << endl;
			cout << "Возобновить ввод?\n1 - Да\n0 - Выйти" << endl;
			cout << "Enter: "; cin >> key; system("cls");
		}
		
	} while (key);

}

void Search_city(map<string, vector<string>>& Сo)
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
	cout << "4 - Добавить" << endl;
	cout << "5 - Удалить" << endl;
	cout << "0 - Выход" << endl;
}

void Del(map<string, vector<string>>& Сo)
{
	string s;
	bool key = 1;
	auto iter = Сo.begin();
	char ch;
	do
	{
		cout << "1 - Удалить страну" << endl;
		cout << "2 - Удалить город" << endl;
		cout << "Enter: "; cin >> ch; cout << endl;

		if (ch<'1'||ch>'2')
		{
			cout << "Некорректные данные, возобновите ввод" << endl;
		}
		else
		{
			if (ch == '1')
			{
				do
				{
					system("cls");
					iter = Сo.begin();
					cout << "Введите страну: "; cin >> s; cout << endl;
					if (Сo.count(s))
					{
						iter = Сo.find(s);//поиск по ключу	
						Сo.erase(iter);
						key = 0; break;
					}
					else
					{
						cout << "Страна не найдена" << endl;
						cout << "Возобновить ввод?\n1 - Да\n0 - Выйти" << endl;
						cout << "Enter: "; cin >> key; system("cls");
					}
				} while (key);
				
			}
			else
			{
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
								auto it = i->second.begin();
								advance(it, j);
								i->second.erase(it);
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
		}
	

	} while (key);
}

void Add(map<string, vector<string>>& Сo)
{
	string s,s2;
	bool key = 1;
	auto iter = Сo.begin();
	char ch;
	do
	{
		cout << "1 - Добавить страну" << endl;
		cout << "2 - Добавить город" << endl;
		cout << "Enter: "; cin >> ch; cout << endl;

		if (ch < '1' || ch>'2')
		{
			cout << "Некорректные данные, возобновите ввод" << endl;
		}
		else
		{
			if (ch == '1')
			{
				do
				{
					system("cls");
					iter = Сo.begin();
					cout << "Введите страну: "; cin >> s; cout << endl;
					if (Сo.count(s))
					{
						cout << "Такая страна есть" << endl;
						cout << "Возобновить ввод?\n1 - Да\n0 - Выйти" << endl;
						cout << "Enter: "; cin >> key; system("cls");						
					}
					else
					{
						vector<string> tmp;
						Сo[s] = tmp;
						key = 0; break;
					}
				} while (key);

			}
			else
			{
				do
				{
					system("cls");
					iter = Сo.begin();
					cout << "Введите страну: "; cin >> s; cout << endl;
					if (Сo.count(s))
					{						
						do
						{
							iter = Сo.find(s);
							cout << "Введите город: "; cin >> s2; cout << endl;
							iter->second.push_back(s2);
							cout << "Добать еще город?\n1 - Да\n0 - Выйти" << endl;
							cout << "Enter: "; cin >> key; system("cls");
						} while (key);
					}
					else
					{
						cout << "Такой страны нет" << endl;
						cout << "Возобновить ввод?\n1 - Да\n0 - Выйти" << endl;
						cout << "Enter: "; cin >> key; system("cls");
					}
					
				} while (key);
			}
		}


	} while (key);
}