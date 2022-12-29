#include "Header.h"

void Show(map<string, vector<string>>& col)
{
	for (auto i = col.begin(); i != col.end(); ++i)
	{
		cout << "-----------------------------------------------------------" << endl;
		cout << "������: " << i->first << endl;;
		cout << "-----------------------------------------------------------" << endl;
		cout << "�������: " << setw(7) << i->second[0] << endl;
		for (int j = 1; j < i->second.size(); j++)
		{
			cout<<setw(16)<< i->second[j] << endl;
		}		
	}
}

void �ountry_creat(map<string, vector<string>> &�ountry)
{
	string Co[5] = { "������","�������","��������������","������","�����" };
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

void Search_c(map<string, vector<string>>& �o, string Cou[])
{
	string s;
	bool key = 1;
	auto iter = �o.begin();
	
	do
	{
		system("cls");
		iter = �o.begin();
		cout << "������� ������: "; cin >> s; cout << endl;

		for (int i = 0; i < �o.size(); i++)
		{
			if (s== Cou[i])
			{
				iter = �o.find(s);
				cout << "-----------------------------------------------------------" << endl;
				cout << "������: " << iter->first << endl;
				cout << "-----------------------------------------------------------" << endl;
				cout << "�������: " << iter->second[0] << endl;
				cout << "-----------------------------------------------------------" << endl;
				key = 0; break;
			}
		}
		if (key == 0) break;

		else
		{
			cout << "������ �� �������" << endl;
			cout << "����������� ����?\n1 - ��\n0 - �����" << endl;
			cout << "Enter: "; cin >> key;
		}
		
	} while (key);

}

void Search_s(map<string, vector<string>>& �o)
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
	cout << "0 - �����" << endl;
}
