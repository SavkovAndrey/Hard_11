#pragma once
#include <string>
using namespace std;


struct Znak
{
	string name;
	string zodiac;
	int bday[3];
	
	Znak();                                          // ����������� �� ��������
	Znak(string name, string zodiac, int bday[]);    // ����������� � �����������
	Znak(Znak& other);                               // ����������� �����������
	~Znak();                                         // ����������
	void InputData(string name, int bday[]);         // ���� ����������
	void OutputData();                               // ����� ����� ������
	/*
	*/
	};