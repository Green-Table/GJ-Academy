#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// while 반복문
	// 조건문이 참일 때 반복하여 수행하라.
	//int cnt = 0;
	//while (1){ // c언어에서 1은 true를 의미하고 0은 false를 의미
	//	printf("c!! - %d\n",cnt+1);
	//	cnt++;
	//	if (cnt>9) break;
	//}

	// break 안 쓰고 탈출하게 만들기
	//int i = 0;
	//while (i<10) { 
	//	printf("%d\n", ++i);
	//}

	// 합계
	//int i = 0, sum=0;
	//while (i < 10) {
	//	sum += ++i;
	//}
	//printf("합계: %d\n", sum);

	// 어떤 정수까지의 총 합계값이 2000을 넘지 않는 수와 그 합계값을 구하여라
	//int i = 0, sum = 0;
	//while (1) {
	//	sum += ++i;
	//	if (sum > 2000) break;
	//}
	//printf("정수: %d\n합계: %d\n", i-1, sum-i);
	//return 0;

	// 실습) 1부터 20까지의 수 중에서 3의 배수만 출력하는 프로그램
	//int i = 0;
	//while (i<20) {
	//	i++;
	//	if (i % 3 == 0) 
	//		printf("%d\n", i);
	//}
	// 또는 3씩 증가하게 하는 방법도 있다
	//int i = 3;
	//	while (i < 20) {
	//		printf("%d\n", i);
	//		i += 3;
	//	}

	//continue: 계속 출력
	// 예제) 1부터 10까지 짝수만 출력
	int a = 0;
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue; // a가 2의 배수가 아니라면 "계속" 해라.
		printf("%d\n", a); // 2의 배수에서 출력되고 2의 배수가 아니면 계속 연산하게 됨
	}










	return 0;


}