#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 전역변수와 지역변수
// 지역변수는 쉽게 말해서 중괄호 안에서 있는 애
// 전역변수는 함수 "밖에" 있는 애

int g=2;

int main() {
	// 지역변수는 함수가 시작될 때 생성, 함수가 종료되면 소멸
	int a = 10;
	printf("a: %d\n", a);
	printf("g: %d\n", g); // 이렇게 하면 g값이 출력되는데, 전역변수는 자동 초기화 되기 때문이다.
						  // int g;만 입력 해 두면 g값은 당연히 0으로 출력된다.

}