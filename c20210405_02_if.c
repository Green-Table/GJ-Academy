#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//if ���ǹ�

	//if (����){
	//	printf(���� �� ����� ����);
	//}else{
	//	printf(������ �� ����� ����);
	//	}


	//int a=-2;
	//if (a > 0){
	//	printf("%d�� ����Դϴ�.", a);
	//}else{
	//	if (a < 0) {
	//		printf("%d�� �����Դϴ�.", a);
	//	}else{
	//		printf("%d�� 0�Դϴ�.", a);
	//	}
	//}

	//ǥ���� �����ϰ�. ������ ������ �� ����ۿ� ������ �߰�ȣ ���� �ʾƵ� �ȴ�.
	//int a = -2;
	//if (a > 0)
	//	printf("%d�� ����Դϴ�.", a);
	//else if (a < 0)
	//	printf("%d�� �����Դϴ�.", a);
	//else
	//	printf("%d�� 0�Դϴ�.", a);

	// �ǽ�) �� ������ �Է¹޾� ū ���� ���(���� ��쵵 ���)
	//int a, b;
	//printf("ù ��° ����: ");
	//scanf("%d", &a);
	//printf("�� ��° ����: ");
	//scanf("%d", &b);
	//if (a > b)
	//	printf("%d�� %d���� Ů�ϴ�.", a, b);
	//else if (a < b)
	//	printf("%d�� %d���� Ů�ϴ�.", b, a);
	//else
	//	printf("%d�� %d�� �����ϴ�.", a, b);

	// �ǽ�) ����������α׷�
	//int a;
	//printf("����: ");
	//scanf("%d", &a);
	//if (a<0 || a>100)
	//	printf("������ �߸� �Է��Ͽ����ϴ�.");
	//else if (a >= 90)
	//	printf("A�����Դϴ�.");
	//else if (a >= 80)
	//	printf("B�����Դϴ�.");
	//else if (a >= 70)
	//	printf("C�����Դϴ�.");
	//else if (a >= 60)
	//	printf("D�����Դϴ�.");
	//else
	//	printf("F�����Դϴ�.");

	// �ǽ�) ������ ���, ������ ��� �� �ִ� ���α׷�
	//int a, b, c;
	//printf("����: ");
	//scanf("%d", &a);
	//printf("����: ");
	//scanf("%d", &b);
	//printf("����: ");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//if (a < 0 | b < 0 | c < 0 | a>100 | b>100 | c>100)
	//	printf("������ �߸� �Է��Ͽ����ϴ�.");
	//else if (a < 60 || b < 60 || c < 60)
	//	printf("�����Դϴ�.");
	//else
	//	printf("����: %d\n���: %f\n", sum, sum / 3.);

	// �ǽ�) ������ �Է¹޾� �������� ���θ� ���
	//int y;
	//printf("����: ");
	//scanf("%d", &y);
	//if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	//	printf("%d���� �����Դϴ�.", y);
	//else
	//	printf("%d���� ������ �ƴմϴ�.", y);

	// �ǽ�)
	int a;
	printf("1.¥���, 2.«��, 3.������, 4.�����, 5.���, 6.�Ľ�Ÿ\n�޴��� ���� �� �ּ���: ");
	scanf("%d", &a);
	if (a < 1 || a > 6)
		printf("��ȣ�� �߸� �Է��Ͽ����ϴ�."); 
	else if (a == 1 || a == 2)
		printf("�߽� �ڳʷ� ������.");
	else if (a == 3 || a == 4)
		printf("�ѽ� �ڳʷ� ������.");
	else
		printf("��� �ڳʷ� ������.");


	return 0;
}