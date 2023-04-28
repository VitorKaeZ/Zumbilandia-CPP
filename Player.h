#include "Human.h"
#include <iostream>
#include "Item.h"

using namespace std;


class Player : public Human
{
protected:
	Item inventory[5];
	Item weapons[2];

public:
	Player();
};
