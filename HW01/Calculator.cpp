#include <iostream>
using namespace std;

#include "Calculator.h"

// Ŭ���� ������

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
		cout << "�и� 0�� �� �� �����ϴ�." << endl;
		return 0;
	}
	return a / b;
}

int main() {
	int x, y;
	char cal;

	while (true) {
		cout << "�� ������ �����ڸ� �Է��ϼ���>> ";
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
			cout << "�ٽ� �Է����ּ���.\n" << endl;

	 }
	return 0;
}