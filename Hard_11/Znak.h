#pragma once
#include <string>
using namespace std;


struct Znak
{
	string name;
	string zodiac;
	int bday[3];
	
	Znak();                                          // Конструктор по умолчани
	Znak(string name, string zodiac, int bday[]);    // Конструктор с параметрами
	Znak(Znak& other);                               // Конструктор копирования
	~Znak();                                         // ДЕструктор
	void InputData(string name, int bday[]);         // Ввод информации
	void OutputData();                               // Вывод всего списка
	/*
	*/
	};