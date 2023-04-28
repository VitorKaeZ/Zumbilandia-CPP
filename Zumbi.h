#pragma once
#include "Human.h"
#include <string>

using namespace std;

class Zumbi : public Human
{
protected:
	string type;
public:
	Zumbi() : type("") {};
	Zumbi(string type);
};

