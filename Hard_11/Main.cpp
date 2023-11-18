#include <iostream>
#include <iomanip>
#include "Znak.h"
#include <string>
using namespace std;

//------------------------- ЗАДАНИЕ

/*
Создать структуру, которая будет хранить информации о знаке зодиака, с именем Znak.
Структура Znak должна содержать следующие поля :
 name — фамилия, имя и отчество;
 zodiac — знак зодиака;
 bday — день рождения(массив из трёх чисел).

Программа, должна уметь выполнять следующие действия :

- ввод с клавиатуры данных в массив book, который состоит из восьми элементов типа Znak;
- вывод на экран информации о людях, родившихся в месяц, значения которого введено с клавиатуры,
если таких нет, выдать на дисплей соответствующее сообщение.
- упорядочивание записей по знакам Зодиака;
*/

//------------------------- ПРОТОТИПЫ

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
		     case 1:                     // Ввод данных в массив
			{
				 string temp_name;
				 int temp_bday[3]{};
				 for (int i = 0; i < 8; i++)
				 {
					 cout << i + 1 << "-й человек:" << endl;
					 cout << "Введите имя и фамилию через пробел: ";
					 cin.get();
					 getline(cin, temp_name);
				
					 cout << "Введите дату рождения:" << endl;
					 cout << "Число: ";
					 cin >> temp_bday[0];
					 cout << "Месяц: ";
					 cin >> temp_bday[1];
					 cout << "Год: ";
					 cin >> temp_bday[2];

					 book[i].InputData(temp_name, temp_bday);
				 }
			break;
			}

			 case 2:                  // Вывод всего списка на экран
			 {
				 cout << "Вывод на экран всего списка:" << endl;
				 cout << setw(20) << "Имя фамилия" << setw(10) << "Знак\t" << "Дата" << endl;
				 for (int i = 0; i < 8; i++)
				 {
					 book[i].OutputData();
			     }
				 break;
			 }

			 case 3:                 // Вывод данных по месяцу
			 {
				 int month; 
				 bool out = false;
				 cout << "Введите месяц (цифрой), по которому вы бы хотели просмотреть данные: ";
				 cin >> month;
				 cout << setw(20) << "Имя фамилия" << setw(10) << "Знак\t" << "Дата" << endl;
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
					 cout << "В таблице нету записей за этот месяц" << endl;
				 }
				 break;
			 }

			 case 4:
			 {
				 cout << "Производится сортировка записей по знаку зодиака!" << endl;
				 sort(book);
				 break;
			 }

			 case 0:
			 {
				 cout << endl << "Вы вышли из программы." << endl;
				 system("pause");
				 return 0;
				 break;
			 }
		}

	}
	system("pause");
	return 0;
}

//------------------------- ФУНКЦИИ

void menu()
{
	cout << endl;
	cout << endl << "ВОЗМОЖНЫЕ ДЕЙСТВИЯ:" << endl;;
	cout << endl << "1 - Вввод массива book (состоящего из восьми персон)";
	cout << endl << "2 - Вывод всего списка на экран";
	cout << endl << "3 - Вывод людей по указаному месяцу";
	cout << endl << "4 - Упорядочить по знаку зодиака";
	cout << endl << "0 - выйти из программы";
	cout << endl;
	cout << endl << "Выберете действие:";
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
