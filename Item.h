#pragma once
#include <string>

using namespace std;

class Item
{
protected:
	string type;
	string name;
	int amount;
public:	
	Item() : type(""), name(""), amount(0) {};
	Item(string type, string name, int amount);


};;

