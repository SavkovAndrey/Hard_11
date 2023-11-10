#include <iostream>
#include "Znak.h"
using namespace std;

//------------------------- ����������� �� ���������

Znak::Znak() 
{
	this->name = "������";
	this->zodiac = "�������";
	bday[0] = 11;
	bday[1] = 12;
	bday[2] = 1986;
}
//------------------------- ����������� � �����������

Znak::Znak(string name, string zodiac, int bday[])
{
	this->name = name;
	this->zodiac = zodiac;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = bday[i];
	}
}

//------------------------- ����������� �����������

Znak::Znak(Znak& other) 
{
	this->name = other.name;
	this->zodiac = other.zodiac;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = other.bday[i];
	}
}

//------------------------- ����������

Znak::~Znak()
{

}

//------------------------- 