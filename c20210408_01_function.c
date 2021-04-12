#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 함수 안에 함수 만들 수 없음. 밖에 만들어야 함
/*
void voidTest(){// void함수. 우리가 항상 쓰던 메인함수와는 달리 매개변수 없고 반환값 없음
	printf("void함수\n"); //메인에서 호출하지 않은 함수는 호출할 수 없음. 
						 //입력만 되고 출력되지 않은 상태
}
int main() { //진입점함수
	voidTest(); // 아까 위에 보이드함수에서 썼던 걸 메인에서 호출할 수 있음

	return 0;
}
*/

/*
// 반지름 입력하면 원 넓이 구해주는 프로그램 보이드와 메인함수를 써서 코딩
void area(double r) {
	printf("넓이: ")
}
//요거 다시하세요
*/

// 리턴이 있을 땐 리턴되는 애의 형을 적어줘야 됨.
// void는 리턴이 없을 때 쓰지만, 여기선 double형을 반환하기 때문에 함수도 double로 써주면 됩니다.
/*double areaReturn(double r) {		// 더블형을 받아다가
	double area = r * r * 3.14;		// 걔를 곱해서
	return area;					// 반환해라
}

int main() {
	double r;
	printf("반지름은? ");
	scanf("%lf", &r);
	double rValue = areaReturn(r);
	printf("%.2f ", rValue);
	return 0;
}
*/


// 세 정수를 매개변수로 받아서 합을 반환하는 함수
/*int sum(int a, int  b, int  c) {
	return a + b + c;
}
int main() {
	printf("합계: %d", sum(10, 20, 30)); // 여기서 sum(a, b, c)값으로 10 20 30 준 게 "매개변수"
}*/

// 두 정수를 매개변수로 받아서 나눈 실수값을 반환하는 함수
/*double t(int a, int b) {
	return (double)a / b;
}
int main() {
	int a = 4, b = 7;
	double q = t(a, b);
	printf("나눈 값: %.2f", q);
}*/

// 두 수룰 매개변수로 받아서 큰 수를 반환하는 함수
int t(int a, int b) {
	if (a > b)
		return a;
	else if (a < b)
		return b;
	else
		return 0;
}
int main() {
	int a = 8, b = 7;
	printf("큰 수: %d", t);
	return 0;
}
// 이거 다시해보시고