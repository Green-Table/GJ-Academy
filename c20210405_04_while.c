#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// while �ݺ���
	// ���ǹ��� ���� �� �ݺ��Ͽ� �����϶�.
	//int cnt = 0;
	//while (1){ // c���� 1�� true�� �ǹ��ϰ� 0�� false�� �ǹ�
	//	printf("c!! - %d\n",cnt+1);
	//	cnt++;
	//	if (cnt>9) break;
	//}

	// break �� ���� Ż���ϰ� �����
	//int i = 0;
	//while (i<10) { 
	//	printf("%d\n", ++i);
	//}

	// �հ�
	//int i = 0, sum=0;
	//while (i < 10) {
	//	sum += ++i;
	//}
	//printf("�հ�: %d\n", sum);

	// � ���������� �� �հ谪�� 2000�� ���� �ʴ� ���� �� �հ谪�� ���Ͽ���
	//int i = 0, sum = 0;
	//while (1) {
	//	sum += ++i;
	//	if (sum > 2000) break;
	//}
	//printf("����: %d\n�հ�: %d\n", i-1, sum-i);
	//return 0;

	// �ǽ�) 1���� 20������ �� �߿��� 3�� ����� ����ϴ� ���α׷�
	//int i = 0;
	//while (i<20) {
	//	i++;
	//	if (i % 3 == 0) 
	//		printf("%d\n", i);
	//}
	// �Ǵ� 3�� �����ϰ� �ϴ� ����� �ִ�
	//int i = 3;
	//	while (i < 20) {
	//		printf("%d\n", i);
	//		i += 3;
	//	}

	//continue: ��� ���
	// ����) 1���� 10���� ¦���� ���
	int a = 0;
	while (a < 10) {
		a++;
		if (a % 2 != 0) continue; // a�� 2�� ����� �ƴ϶�� "���" �ض�.
		printf("%d\n", a); // 2�� ������� ��µǰ� 2�� ����� �ƴϸ� ��� �����ϰ� ��
	}










	return 0;


}