#include <iostream>
using namespace std;

#include "Calculator.h"

// 클래스 구현부

void Add::setValue(int x, int y) {
	a = x;
	b = y;
}
int Add::calculate() {
	return a + b;
}

void Sub::setValue(int x, int y) {
	a = x;
	b = y;
}
int Sub::calculate() {
	return a - b;
}

void Mul::setValue(int x, int y) {
	a = x;
	b = y;
}
int Mul::calculate() {
	return a * b;
}

void Div::setValue(int x, int y) {
	a = x;
	b = y;
}
int Div::calculate() {
	if (b == 0) {
		cout << "분모에 0이 올 수 없습니다." << endl;
		return 0;
	}
	return a / b;
}

int main() {
	int x, y;
	char cal;

	while (true) {
		cout << "두 정수와 연산자를 입력하세요>> ";
		cin >> x >> y >> cal;
			
		Add a;
		Sub s;
		Mul m;
		Div d;

		if (cal == '+') {
			a.setValue(x, y);
			cout << a.calculate() << endl;
		}
		else if (cal == '-') {
			s.setValue(x, y);
			cout << s.calculate() << endl;
		}
		else if (cal == '*') {
			m.setValue(x, y);
			cout << m.calculate() << endl;
		}
		else if (cal == '/') {
			d.setValue(x, y);
			cout << d.calculate() << endl;
		}
		else
			cout << "다시 입력해주세요.\n" << endl;

	 }
	return 0;
}