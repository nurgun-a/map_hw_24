#include "Header.h"

void Show(map<string, vector<string>>& col)
{
	for (auto i = col.begin(); i != col.end(); ++i)
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "������: " << i->first << endl;;
		cout << "-----------------------------------------------------------" << endl;
		cout << setw(3) << 1 << ")" << "�������: " << setw(7) << i->second[0] << endl;
		for (int j = 1; j < i->second.size(); j++)
		{
			cout << setw(3) <<j+1<<")" << setw(16) << i->second[j] << endl;
		}		
	}
}

void �ountry_creat(map<string, vector<string>> &�ountry, string Co[])
{
	vector <string> v1{"������", "�����_���������", "������", "�����������","�����������" };
	vector <string> v2{ "�����", "�����", "�������", "����","���", "�����" };
	vector <string> v3{ "������", "���������", "���������", "���","�������", "�������" , "���������" };
	vector <string> v4{ "������", "�������", "��������", "��������","��������", "��������" , "������", "�������" };
	vector <string> v5{ "�����", "�����", "���������", "������","��������", "������" , "�����", "������", "�������" };

	vector <string> v_all [5] = { v1,v2,v3,v4,v5 };

	for (int i = 0; i < 5; i++)
	{
		�ountry.insert(make_pair(Co[i], v_all[i]));
	}	
}

void Search_c(map<string, vector<string>>& �o)
{
	string s;
	bool key = 1;
	auto iter = �o.begin();
	
	do
	{
		system("cls");
		iter = �o.begin();
		cout << "������� ������: "; cin >> s; cout << endl;
		if (�o.count(s))
		{
			iter = �o.find(s);
			cout << "-----------------------------------------------------------" << endl;
			cout << "������: " << iter->first << endl;
			cout << "-----------------------------------------------------------" << endl;
			cout << "�������: " << iter->second[0] << endl;
			cout << "-----------------------------------------------------------" << endl;
			key = 0; break;
		}
		else
		{
			cout << "������ �� �������" << endl;
			cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
			cout << "Enter: "; cin >> key; system("cls");
		}
		
	} while (key);

}

void Search_city(map<string, vector<string>>& �o)
{

	string s;
	bool key = 1;
	
	do
	{
		system("cls");
		cout << "������� �����: "; cin >> s; cout << endl;
		for (auto i = �o.begin(); i != �o.end(); ++i)
		{
			for (int j = 0; j < i->second.size(); j++)
			{
				if (i->second[j] == s)
				{

					cout << "-----------------------------------------------------------" << endl;
					cout << "������: " << i->first << endl;
					cout << "-----------------------------------------------------------" << endl;
					cout << "�������: " << i->second[0] << endl;
					cout << "-----------------------------------------------------------" << endl;
					key = 0; break;
				}
			}
		}
		if (key == 0) break;
		else
		{
			cout << "����� �� ������" << endl;
			cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
			cout << "Enter: "; cin >> key;
		}
	} while (key);
	
	
}

void Show_h()
{
	cout << "1 - ����� ������" << endl;
	cout << "2 - ����� �� ������" << endl;
	cout << "3 - ����� �� ������" << endl;
	cout << "4 - ��������" << endl;
	cout << "5 - �������" << endl;
	cout << "0 - �����" << endl;
}

void Del(map<string, vector<string>>& �o)
{
	string s;
	bool key = 1;
	auto iter = �o.begin();
	char ch;
	do
	{
		cout << "1 - ������� ������" << endl;
		cout << "2 - ������� �����" << endl;
		cout << "Enter: "; cin >> ch; cout << endl;

		if (ch<'1'||ch>'2')
		{
			cout << "������������ ������, ����������� ����" << endl;
		}
		else
		{
			if (ch == '1')
			{
				do
				{
					system("cls");
					iter = �o.begin();
					cout << "������� ������: "; cin >> s; cout << endl;
					if (�o.count(s))
					{
						iter = �o.find(s);//����� �� �����	
						�o.erase(iter);
						key = 0; break;
					}
					else
					{
						cout << "������ �� �������" << endl;
						cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
						cout << "Enter: "; cin >> key; system("cls");
					}
				} while (key);
				
			}
			else
			{
				do
				{
					system("cls");
					cout << "������� �����: "; cin >> s; cout << endl;
					for (auto i = �o.begin(); i != �o.end(); ++i)
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
						cout << "����� �� ������" << endl;
						cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
						cout << "Enter: "; cin >> key;
					}
				} while (key);				
			}
		}
	

	} while (key);
}

void Add(map<string, vector<string>>& �o)
{
	string s,s2;
	bool key = 1;
	auto iter = �o.begin();
	char ch;
	do
	{
		cout << "1 - �������� ������" << endl;
		cout << "2 - �������� �����" << endl;
		cout << "Enter: "; cin >> ch; cout << endl;

		if (ch < '1' || ch>'2')
		{
			cout << "������������ ������, ����������� ����" << endl;
		}
		else
		{
			if (ch == '1')
			{
				do
				{
					system("cls");
					iter = �o.begin();
					cout << "������� ������: "; cin >> s; cout << endl;
					if (�o.count(s))
					{
						cout << "����� ������ ����" << endl;
						cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
						cout << "Enter: "; cin >> key; system("cls");						
					}
					else
					{
						vector<string> tmp;
						�o[s] = tmp;
						key = 0; break;
					}
				} while (key);

			}
			else
			{
				do
				{
					system("cls");
					iter = �o.begin();
					cout << "������� ������: "; cin >> s; cout << endl;
					if (�o.count(s))
					{						
						do
						{
							iter = �o.find(s);
							cout << "������� �����: "; cin >> s2; cout << endl;
							iter->second.push_back(s2);
							cout << "������ ��� �����?\n1 - ��\n0 - �����" << endl;
							cout << "Enter: "; cin >> key; system("cls");
						} while (key);
					}
					else
					{
						cout << "����� ������ ���" << endl;
						cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
						cout << "Enter: "; cin >> key; system("cls");
					}
					
				} while (key);
			}
		}


	} while (key);
}