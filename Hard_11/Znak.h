#pragma once
struct Znak
{
	string name;
	string zodiac;
	int bday[3];
	
	Znak();                                          // ����������� �� ��������
	Znak(string name, string zodiac, int bday[]);    // ����������� � �����������
	Znak(Znak& other);                               // ����������� �����������
	~Znak();                                         // ����������

};