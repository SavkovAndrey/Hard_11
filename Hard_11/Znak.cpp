#include <iostream>
#include "Znak.h"
using namespace std;

//-------------------------  ŒÕ—“–” “Œ– œŒ ”ÃŒÀ◊¿Õ»ﬁ

Znak::Znak() 
{
	this->name = "¿Ì‰ÂÈ";
	this->zodiac = "—ÚÂÎÂˆ";
	bday[0] = 11;
	bday[1] = 12;
	bday[2] = 1986;
}
//-------------------------  ŒÕ—“–” “Œ– — œ¿–¿Ã≈“–¿Ã»

Znak::Znak(string name, string zodiac, int bday[])
{
	this->name = name;
	this->zodiac = zodiac;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = bday[i];
	}
}

//-------------------------  ŒÕ—“–” “Œ–  Œœ»–Œ¬¿Õ»ﬂ

Znak::Znak(Znak& other) 
{
	this->name = other.name;
	this->zodiac = other.zodiac;
	for (int i = 0; i < 3; i++)
	{
		this->bday[i] = other.bday[i];
	}
}

//------------------------- ƒ≈—“–” “Œ–

Znak::~Znak()
{

}

//------------------------- 