#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {

	// �Ǻ���ġ ����
	int a;
	printf("�� ��°���� �Ǻ���ġ ������ ����ұ��? ");
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