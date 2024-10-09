#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "gamblingGame.h"

GamblingGame::GamblingGame() {
	cout << "***** 겜블링 게임을 시작합니다. *****" << endl;
	srand((unsigned)time(0));
}

void GamblingGame::setPlayer() {
	string name;
	cout << "첫번째 선수 이름>> ";
	cin >> name;
	player[0].setName(name);
	cout << "두번째 선수 이름>> ";
	cin >> name;
	player[1].setName(name);
}

void GamblingGame::playGame() {
	int rint[3];
	int turn = 0;
	while (1) {
		cout << player[turn].getName() << ":<Enter>" << endl;
		cin.get();
		cout << "\t\t";
		for (int i = 0; i <= 2; i++) {
			rint[i] = rand() % 3;
			cout << rint[i] << '\t';
		}
		if (rint[0] == rint[1] && rint[0] == rint[2]) {
			cout << player[turn].getName() << "님 승리!!" << endl;
			break;
		}
		else
			cout << "아쉽군요!" << endl;
		turn = (turn + 1) % 2;
	}
}