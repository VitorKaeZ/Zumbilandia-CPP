#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


Player::Player() {
	this->health = 500;
	this->attack = 100;
	this->defense = 50;
	this->speed = 1.0f;
	Item Potion("potion", "Poção de Vida", 5);
	this->inventory[1] = Potion;
	Item Weapon("weapon", "Espada de Madeira", 1);
	this->weapons[1] = Weapon;




	cout << "\nSua Vida é: " + to_string(this->health) + "\nSua força é: " + to_string(this->attack) + "\nSeu defesa é: " + to_string(this->defense) + "\nSeu velocidade é: " + to_string(this->speed);
}