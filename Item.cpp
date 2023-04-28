#include "Item.h"
#include <iostream>
#include <string>
using namespace std;


Item::Item(string type, string name, int amount) {

	this->type = type;
	this->name = name;
	this->amount = amount;
	
}