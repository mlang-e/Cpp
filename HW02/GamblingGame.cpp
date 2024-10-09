#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

#include "gamblingGame.h"

GamblingGame::GamblingGame() {
	cout << "***** �׺� ������ �����մϴ�. *****" << endl;
	srand((unsigned)time(0));
}

void GamblingGame::setPlayer() {
	string name;
	cout << "ù��° ���� �̸�>> ";
	cin >> name;
	player[0].setName(name);
	cout << "�ι�° ���� �̸�>> ";
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
			cout << player[turn].getName() << "�� �¸�!!" << endl;
			break;
		}
		else
			cout << "�ƽ�����!" << endl;
		turn = (turn + 1) % 2;
	}
}