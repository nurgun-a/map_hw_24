#include "Header.h"

void main()
{
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char k;
	bool key1 = 1;
	map<string, vector<string>> �ountry;
	string Cou[5] = { "������","�������","��������������","������","�����" };
	�ountry_creat(�ountry,Cou);

	do
	{		
		Show_h();
		cout << "Enter: "; cin >> k;	
		system("cls");
		if (k<'0' || k>'5')
		{
			cout << "������, ������� ������������ ������" << endl;
		}
		else
		{
			switch (k)
			{
				case '1':
				{
					Show(�ountry);
					_getch();
					system("cls");
				}break;
				case '2':
				{
					Search_c(�ountry);
				}break;
				case '3':
				{
					Search_city(�ountry);
				}break;
				case '4':
				{
					Add(�ountry);
				}break;
				case '5':
				{
					Del(�ountry);
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