#include "Zumbi.h"
#include <iostream>
#include <string>
using namespace std;


Zumbi::Zumbi(string type) {
	this->health = 500;
	this->attack = 100;
	this->defense = 50;
	this->speed = 1.0f;
	this->type = type;




	cout << "\nSua Vida �: " + to_string(this->health) + "\nSua for�a �: " + to_string(this->attack) + "\nSeu defesa �: " + to_string(this->defense) + "\nSeu velocidade �: " + to_string(this->speed);
}