#include <iostream>
using namespace std;

#include "Calculator.h"

// main �Լ�

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