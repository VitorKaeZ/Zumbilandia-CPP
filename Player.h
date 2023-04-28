#include "Human.h"
#include <iostream>

using namespace std;

class Player : public Human
{
protected:
	string weapon;
public:
	Player();
};
