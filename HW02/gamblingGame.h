#pragma once
#include <string>
using namespace std;
#include "player.h"

class GamblingGame {
	Player player[2];
public:
	GamblingGame();
	void setPlayer();
	void playGame();
};