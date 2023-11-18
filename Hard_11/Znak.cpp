#include "Znak.h"
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//------------------------- ÊÎÍÑÒĞÓÊÒÎĞ ÏÎ ÓÌÎË×ÀÍÈŞ

Znak::Znak() 
{
	this->name = "Àíäğåé";
	this->zodiac = "Ñòğåëåö";
	bday[0] = 11;
	bday[1] = 12;
	bday[2] = 1986;
}
//------------------------- ÊÎÍÑÒĞÓÊÒÎĞ Ñ ÏÀĞÀÌÅÒĞÀÌÈ

Znak::Znak(string name, string zodiac, int bday[])
{
	this->name = name;
	this->zodiac = zodiac;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = bday[i];
	}
}

//------------------------- ÊÎÍÑÒĞÓÊÒÎĞ ÊÎÏÈĞÎÂÀÍÈß

Znak::Znak(Znak& other) 
{
	this->name = other.name;
	this->zodiac = other.zodiac;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = other.bday[i];
	}
}

//------------------------- ÄÅÑÒĞÓÊÒÎĞ

Znak::~Znak()
{

}

//------------------------- ÂÂÎÄ ÈÍÔÎĞÌÀÖÈÈ 
void Znak::InputData(string name, int bday[])
{
	this->name = name;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = bday[i];
	}

		 if ((bday[1] == 1  && bday[0] >= 21) || (bday[1] == 2  && bday[0] <= 19)) this->zodiac = "Âîäîëåé";
	else if ((bday[1] == 2  && bday[0] >= 20) || (bday[1] == 3  && bday[0] <= 20)) this->zodiac = "Ğûáû";
	else if ((bday[1] == 3  && bday[0] >= 21) || (bday[1] == 4  && bday[0] <= 20)) this->zodiac = "Îâåí";
	else if ((bday[1] == 4  && bday[0] >= 21) || (bday[1] == 5  && bday[0] <= 20)) this->zodiac = "Òåëåö";
	else if ((bday[1] == 5  && bday[0] >= 21) || (bday[1] == 6  && bday[0] <= 21)) this->zodiac = "Áëèçíåöû";
	else if ((bday[1] == 6  && bday[0] >= 22) || (bday[1] == 7  && bday[0] <= 22)) this->zodiac = "Ğàê";
	else if ((bday[1] == 7  && bday[0] >= 23) || (bday[1] == 8  && bday[0] <= 23)) this->zodiac = "Ëåâ";
	else if ((bday[1] == 8  && bday[0] >= 24) || (bday[1] == 9  && bday[0] <= 23)) this->zodiac = "Äåâà";
	else if ((bday[1] == 9  && bday[0] >= 24) || (bday[1] == 10 && bday[0] <= 23)) this->zodiac = "Âåñû";
	else if ((bday[1] == 10 && bday[0] >= 24) || (bday[1] == 11 && bday[0] <= 22)) this->zodiac = "Ñêîğïèîí";
	else if ((bday[1] == 11 && bday[0] >= 23) || (bday[1] == 12 && bday[0] <= 21)) this->zodiac = "Ñòğåëåö";
	else if ((bday[1] == 12 && bday[0] >= 22) || (bday[1] == 1  && bday[0] <= 20)) this->zodiac = "Êîçåğîã";
}

//------------------------- ÂÛÂÎÄ ÈÍÔÎĞÌÀÖÈÈ

void Znak::OutputData()
{
	cout << setw(20) << name << setw(10) << zodiac << "\t" << bday[0] << "." << bday[1] << "." << bday[2] << endl;
}

//-------------------------
/*
*/