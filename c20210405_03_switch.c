#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// switch~case ���ǹ�
	//int a = 1;
	//switch (a) {
	//case 0:
	//	printf("zero\n"); break;
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("�߸��� ����\n");
	//}
	// ����ġ���� �߰�ȣ�� �ϳ�
	// �극��ũ�� ���� ������ ����� ���� �� �ִ�.

	// �ǽ�) ���� ������ ���� ����Ͻÿ�
	//int a;
	//printf("����� ������ ���� �ñ���? ");
	//scanf("%d", &a);
	//switch (a) {
	//case 0:
	//	printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�."); break;
	//case 1:	case 3:	case 5:	case 7:	case 8: case 10: case 12:
	//	printf("31��"); break;
	//case 2:
	//	printf("28��"); break;
	//case 4:	case 6:	case 9:	case 11:
	//	printf("30��"); break;
	//default:
	//	printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�.");
	//}
	// �̷� ������ ������ �ٲ���Ƶ� ��� ����. ���� ���ٸ� break�� �� ���ָ� �ȴ�.

	// �ǽ�)
	int a;
	printf("1.¥���, 2.«��, 3.������, 4.�����, 5.���, 6.�Ľ�Ÿ\n�޴��� ���� �� �ּ���: ");
	scanf("%d", &a);
	switch (a) {
	case 0:
		printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�."); break;
	case 1:	case 2:	
		printf("�ѽ� �ڳʷ� ������."); break;
	case 3: case 4:
		printf("�ѽ� �ڳʷ� ������."); break;
	case 5:	case 6:
		printf("��� �ڳʷ� ������."); break;
	default:
		printf("�߸��� ���ڸ� �Է��Ͽ����ϴ�.");
	}





	return 0;
}