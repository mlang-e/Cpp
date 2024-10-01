#include <iostream>
using namespace std;

#include "Calculator.h"

// main 함수

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