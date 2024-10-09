#include <iostream>
#include <cstdlib>
using namespace std;
#include "player.h"

void Player::setName(string name) {
	this->name = name;
}

string Player::getName() {
	return name;
}