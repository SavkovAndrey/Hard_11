#include <iostream>
#include <iomanip>
#include "Znak.h"
#include <string>
using namespace std;

//------------------------- �������

/*
������� ���������, ������� ����� ������� ���������� � ����� �������, � ������ Znak.
��������� Znak ������ ��������� ��������� ���� :
 name � �������, ��� � ��������;
 zodiac � ���� �������;
 bday � ���� ��������(������ �� ��� �����).

���������, ������ ����� ��������� ��������� �������� :

- ���� � ���������� ������ � ������ book, ������� ������� �� ������ ��������� ���� Znak;
- ����� �� ����� ���������� � �����, ���������� � �����, �������� �������� ������� � ����������,
���� ����� ���, ������ �� ������� ��������������� ���������.
- �������������� ������� �� ������ �������;
*/

//------------------------- ���������

void menu();
void sort(Znak book[]);

//------------------------- Main

int main()
{
	setlocale(LC_ALL, "RU");

	Znak book[8];
	while (true)
	{
		menu();
		int n;
		cin >> n;

		switch (n)
		{
		     case 1:                     // ���� ������ � ������
			{
				 string temp_name;
				 int temp_bday[3]{};
				 for (int i = 0; i < 8; i++)
				 {
					 cout << i + 1 << "-� �������:" << endl;
					 cout << "������� ��� � ������� ����� ������: ";
					 cin.get();
					 getline(cin, temp_name);
				
					 cout << "������� ���� ��������:" << endl;
					 cout << "�����: ";
					 cin >> temp_bday[0];
					 cout << "�����: ";
					 cin >> temp_bday[1];
					 cout << "���: ";
					 cin >> temp_bday[2];

					 book[i].InputData(temp_name, temp_bday);
				 }
			break;
			}

			 case 2:                  // ����� ����� ������ �� �����
			 {
				 cout << "����� �� ����� ����� ������:" << endl;
				 cout << setw(20) << "��� �������" << setw(10) << "����\t" << "����" << endl;
				 for (int i = 0; i < 8; i++)
				 {
					 book[i].OutputData();
			     }
				 break;
			 }

			 case 3:                 // ����� ������ �� ������
			 {
				 int month; 
				 bool out = false;
				 cout << "������� ����� (������), �� �������� �� �� ������ ����������� ������: ";
				 cin >> month;
				 cout << setw(20) << "��� �������" << setw(10) << "����\t" << "����" << endl;
				 for (int i = 0; i < 8; i++)
				 {
					 if (book[i].bday[1] == month)
					 {
						 book[i].OutputData();
						 out = true;
					 }
				 }
				 if (out = false)
				 {
					 cout << "� ������� ���� ������� �� ���� �����" << endl;
				 }
				 break;
			 }

			 case 4:
			 {
				 cout << "������������ ���������� ������� �� ����� �������!" << endl;
				 sort(book);
				 break;
			 }

			 case 0:
			 {
				 cout << endl << "�� ����� �� ���������." << endl;
				 system("pause");
				 return 0;
				 break;
			 }
		}

	}
	system("pause");
	return 0;
}

//------------------------- �������

void menu()
{
	cout << endl;
	cout << endl << "��������� ��������:" << endl;;
	cout << endl << "1 - ����� ������� book (���������� �� ������ ������)";
	cout << endl << "2 - ����� ����� ������ �� �����";
	cout << endl << "3 - ����� ����� �� ��������� ������";
	cout << endl << "4 - ����������� �� ����� �������";
	cout << endl << "0 - ����� �� ���������";
	cout << endl;
	cout << endl << "�������� ��������:";
}

void sort(Znak book[])
{
	Znak temp;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 7; j++)
		{
			if (book[j].ValueZnak() > book[j + 1].ValueZnak())
			{
				temp = book[j + 1];
				book[j + 1] = book[j];
				book[j] = temp;
			}
		}
	}
}
