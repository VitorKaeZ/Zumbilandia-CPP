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




	cout << "\nSua Vida é: " + to_string(this->health) + "\nSua força é: " + to_string(this->attack) + "\nSeu defesa é: " + to_string(this->defense) + "\nSeu velocidade é: " + to_string(this->speed);
}