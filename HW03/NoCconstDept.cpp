#include <iostream>
#include "noCconstDept.h"
using namespace std;

Dept::Dept(int size) {
	this->size = size;
	scores = new int[size];
}

Dept::~Dept() {
	//delete[] scores;
}

int Dept::getSize() {
	return size;
}

void Dept::read() {
	cout << "10�� ���� �Է�>> ";
	for (int i = 0; i < size; i++)
		cin >> scores[i];
}

bool Dept::isOver60(int index) {
	return scores[index] > 60;
}

int Dept::countPass(Dept& dept) { // dept �а��� 60�� �̻����� ����ϴ� �л��� �� ����
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))
			count++;
	}
	return count;
}