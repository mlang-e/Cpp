#include <iostream>
#include "dept.h"
using namespace std;

Dept::Dept(int size) {
	this->size = size;
	scores = new int[size];
}

Dept::Dept(const Dept& dept) {
	this->size = dept.size;
	this->scores = new int[dept.size];
	for (int i = 0; i < dept.size; i++)
		this->scores[i] = dept.scores[i];
}

Dept::~Dept() {
	delete[] scores;
}

int Dept::getSize() { 
	return size; 
}

void Dept::read() {
	cout << "10명 점수 입력>> ";
	for (int i = 0; i < size; i++)
		cin >> scores[i];
}

bool Dept::isOver60(int index) {
	return scores[index] > 60;
}

int Dept::countPass(Dept dept) { // dept 학과에 60점 이상으로 통과하는 학생의 수 리턴
	int count = 0;
	for (int i = 0; i < dept.getSize(); i++) {
		if (dept.isOver60(i))
			count++;
	}
	return count;
}