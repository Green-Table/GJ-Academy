#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// �Լ� �ȿ� �Լ� ���� �� ����. �ۿ� ������ ��
/*
void voidTest(){// void�Լ�. �츮�� �׻� ���� �����Լ��ʹ� �޸� �Ű����� ���� ��ȯ�� ����
	printf("void�Լ�\n"); //���ο��� ȣ������ ���� �Լ��� ȣ���� �� ����. 
						 //�Է¸� �ǰ� ��µ��� ���� ����
}
int main() { //�������Լ�
	voidTest(); // �Ʊ� ���� ���̵��Լ����� ��� �� ���ο��� ȣ���� �� ����

	return 0;
}
*/

/*
// ������ �Է��ϸ� �� ���� �����ִ� ���α׷� ���̵�� �����Լ��� �Ἥ �ڵ�
void area(double r) {
	printf("����: ")
}
//��� �ٽ��ϼ���
*/

// ������ ���� �� ���ϵǴ� ���� ���� ������� ��.
// void�� ������ ���� �� ������, ���⼱ double���� ��ȯ�ϱ� ������ �Լ��� double�� ���ָ� �˴ϴ�.
/*double areaReturn(double r) {		// �������� �޾ƴٰ�
	double area = r * r * 3.14;		// �¸� ���ؼ�
	return area;					// ��ȯ�ض�
}

int main() {
	double r;
	printf("��������? ");
	scanf("%lf", &r);
	double rValue = areaReturn(r);
	printf("%.2f ", rValue);
	return 0;
}
*/


// �� ������ �Ű������� �޾Ƽ� ���� ��ȯ�ϴ� �Լ�
/*int sum(int a, int  b, int  c) {
	return a + b + c;
}
int main() {
	printf("�հ�: %d", sum(10, 20, 30)); // ���⼭ sum(a, b, c)������ 10 20 30 �� �� "�Ű�����"
}*/

// �� ������ �Ű������� �޾Ƽ� ���� �Ǽ����� ��ȯ�ϴ� �Լ�
/*double t(int a, int b) {
	return (double)a / b;
}
int main() {
	int a = 4, b = 7;
	double q = t(a, b);
	printf("���� ��: %.2f", q);
}*/

// �� ���� �Ű������� �޾Ƽ� ū ���� ��ȯ�ϴ� �Լ�
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
	printf("ū ��: %d", t);
	return 0;
}
// �̰� �ٽ��غ��ð�