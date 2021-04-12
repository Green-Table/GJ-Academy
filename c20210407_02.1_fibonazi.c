#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	// 피보나치 수열
	int a;
	printf("몇 번째까지 피보나치 수열을 출력할까요? ");
	scanf("%d", &a);
	int fibo[40];
	fibo[0] = 0, fibo[1] = 1;
	for (int i = 2; i < a; i++) {
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}
	for (int i = 0; i < a; i++)
		printf("%d ", fibo[i]);



return 0;
}