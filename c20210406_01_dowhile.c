#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// do~while
	// ��� �����ؾ� ���� ������ ���߿� ����
	//int a = -1;
	//	do {
	//		printf("%d", a);

	//	} while (a > 0); // �ּ� �� ���� ����
	// ���� ��������:
	// ��) ����ڿ��� �Է��� �޾Ƽ� y�� "���� �÷���" ���
		//char answer = 'y'; // �̷��� �ϸ� �Է��� ���� ���� ���� answer���� �����߱� ������ ������ ��
		//	while (answer == 'y') { 
		//		printf("���� �÷��� �ұ��(y)?");
		//		scanf("%c", &answer);
		//		getchar(); // ���Ͱ� ó��
		//		printf("���� �÷���\n");
		//}	// �̷� ������ do while�� �̿��ؼ� �� �����ϰ� ���� �� ����
		
	// �� �κ� ������ ���� �����ؾ߰ڴ�.... �� ���ư���...
	//char answer;
	//do {
	//	printf("���� �÷���\n");
	//	printf("��� �÷��� �ұ��(y)?");
	//	scanf("%c", &answer);
	//	getchar();
	//} while (answer == 'y');

	// �ǽ�) � ������ ��� �Է¹޾Ƽ� �հ踦 ���ϰ� 0�� �Է��� ��� �����ϴ� ���α׷�
	int a;
	do {
		getchar();
		printf("������ �Է��ϼ���. %d", a);
		scanf("%d", a);
		a++;
	} while (a = 0);
		printf("%d", a);
	




	return 0;
}