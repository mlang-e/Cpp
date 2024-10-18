#pragma once

class Dept {
	int size; // scores 배열의 크기
	int* scores; // 동적 할당 받을 정수 배열의 주고

public:
	Dept(int size); // 생성자
	~Dept(); // 소멸자
	int getSize();
	void read(); // size 만큼 키보드에서 정수를 읽어 scores 배열에 저장
	bool isOver60(int index); // index의 학생의 성적이 60보다 크면 true 리턴
	int countPass(Dept& dept);
};

