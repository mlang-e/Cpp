#pragma once
#ifndef CALCULATOR_H
#define CALCULATOR_H

// Ŭ���� �����

class Add {
private:
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Sub {
private:
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Mul {
private:
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};

class Div {
private:
	int a, b;
public:
	void setValue(int x, int y);
	int calculate();
};

#endif