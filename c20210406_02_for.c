#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//// �ݺ��� for
	//int i; // �ݺ��� ����
	//for (i = 0 ; i < 10 ; i++) { // i�� 0���� �����Ѵ�. i�� 10���� �۴�. i�� 1�� �����Ѵ�
	//							 // �� �� ������ �� ���� ���� �� �ִ�.
	//							 // ������ ������ �� ������ ��� �����ϰ� Ż��
	//	printf("%d\n", i);

	//}

	// 2�� ������ �����
	//int i; 
	//for (i = 1; i < 10; i++) { 
	//	printf("2*%d=%d\n", i, i*2);

	//}
	
	// �ܼ� �Է¹޾� ����ϴ� ������ �����
	//int i, a; 
	//printf("���? ");
	//scanf("%d", &a);
	//for (i = 1; i < 10; i++) {
	//	printf("%d*%d=%d\n", a, i, i * a);
	//}

	// ���� for��
	/*for (int i = 0; i < 10; i++) {
		printf("---------------\n");
		for (int j = 0; j < 10; j++) {
			printf("%d %d\n", i, j);
		}
	}*/
	// i�� 0�� ���¿��� j�� 0���� 9���� ����
	// i�� 1�� ���·� ���ư��� �ٽ� j�� 0���� 9���� ����
	// �̰� i�� 9�� �� ������ ����

	// ������
	//for (int i = 2; i < 10; i++) {
	//	printf("\n[%d��]\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i*j);
	//	}
	//}
	
	// �ǽ�) 1���� 100���� ��
	/*int sum=0;
	for (int i = 1; i < 101; i++) {
		sum += i;
	}
	printf("%d", sum);*/

	// �ǽ�) 1���� �Է¹��� �� ������ ��
	/*int a, sum = 0;
	printf("���ڸ� �Է��ϼ���. ");
	scanf("%d", &a);
	for (int i = 0; i < a+1; i++) {
		sum += i;	
	}
	printf("%d", sum);*/

	// �ǽ�) �� ���� �Է¹޾� ū ������ ���� ���� ���� ���α׷�. 0�� ������ ����
	/*int a, b = 0;
	for (int i = 0; i < 10 + 1; i++) {
		printf("���ڸ� �Է��ϼ���. ");
		scanf("%d", &a);
		scanf("%d", &b);
		if (a==0) break;
		if (a > b) printf("���� %d\n", a - b);
		else printf("���� %d\n", b - a);
	}*/

	// �ǽ�) �����
	// �� 1-1
	/*for (int i = 1; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	// �� 1-2
	/*for (int i = 7; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	//�� 2
	/*for (int i = 7; i > 0; i--) {
		for (int j = 0; j < i; j++){
			printf(" ");
		}
		for (int j = 8; j > i; j--){
			printf("*");
		}
		printf("\n");
	}*/
	// �� 3-1
	/*for (int i = 6; i > 0; i--) {
		for (int j = 6 - i; j < 6;j++) {
			printf(" ");
		}
		for (int j = i * 2 - 1; j < 12; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	// �� 3-2
	/*for (int i = 1; i < 8; i++) {
		for (int j = 6-i; j < 6; j++) {
			printf(" ");
		}
		for (int j = i*2-1; j < 12; j++) {
			printf("*");
		}
		printf("\n");
	}*/


	// �ǽ�) �� ���ڸ� �Է¹޾Ƽ� �� �� ������ ������ ���� ����ϴ� ���α׷�
	/*int a, b, sum = 0;
	printf("���� �� ���� �Է��ϼ���.\n");
	scanf("%d", &a);
	scanf("%d", &b);
	for (int x = a + 1; x < b; x++) {
		sum += x;
	}
	printf("%d", sum);*/

	// �ǽ�) n ���丮�� ���ϱ� ------------ ���ϰھ�!!
	/*int n, fac;
	printf("�� ���丮���� ���ϰ� �����Ű���? ");
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		fac = i * (i++);
	}
	printf("%d", fac);*/

	// �ǽ�) �޴���
	// ���ڷ� �޾��� ���� ���ڷ� �޾��� ���� ������
	// ���ڷ� �޾��� �� 4����Ʈ¥���� ���������� ���ڴ� 1����Ʈ �ƽ�Ű�ڵ尪�� ����
	char a;
	do {
		printf("1.¥���, 2.«��, 3.������, 4.�����, 5.���, 6.�Ľ�Ÿ, q.����\n�޴��� ������.\n");
		scanf("%c", &a);
		getchar();
		switch (a) {
		case 1:	case 2:
			printf("�߽� �ڳʷ� ������."); break;
		case 3: case 4:
			printf("�ѽ� �ڳʷ� ������."); break;
		case 5:	case 6:
			printf("��� �ڳʷ� ������."); break;
		default:
			printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�.\n�޴��� �ٽ� ���� �� �ּ���. ");
		}
	}
	


















	return 0;
}