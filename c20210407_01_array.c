#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//�迭 array
	/*int arr[3];
	arr[0] = 10; arr[1] = 20; arr[2] = 30;
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%�� %d", arr[0], sizeof(arr*/


	/*int arr[3];
	arr[0] = 10; arr[1] = 20; arr[2] = 30;
	for (int i = 0; i < 3; i++) {
		printf("%d ", arr[i]);
	}*/


	/*int arr[3];
	for (int i = 0; i < 3; i++) {
		arr[i] = (i + 1) * 10;
		printf("%d ", arr[i]);
	}*/


	// �ǽ�) ����������
	/*double arr[3] = {1.1, 2.2, 3.3};
	for (int i = 0; i < 3; i++) {
		printf("%.1f\n", arr[i]);
	}*/

	// �ݺ����� �̿��ؼ� �ʱ�ȭ
	/*double arr[3];
	for (int i = 0; i < 3; i++) {
		arr[i] = i+1 + ((i+1) * 0.1);
		printf("%.1f\n", arr[i]);
	}*/

	// �迭�� ũ�� ���ϱ�
	/*double arr[3];
	int size = sizeof(arr) / sizeof(double);
	printf("������: %d\n", size);

	for (int i = 0; i < size; i++) {
		printf("%.1f", arr[i]);
	}*/

	// ������ �迭
	/*char arr[] = {'p','y','t','h','o','n' };
	int size = sizeof(arr) / sizeof(char);
	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}*/
	//�̷��� �ϸ� ����(Ȥ�� ����)�� �þ�� ������ �ٲ����� �ʾƵ� �˴ϴ�.

	// �迭���� ��
	/*int arr[] = {4,5,9,12,34};
	int size = sizeof(arr) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	printf("%d", sum);*/

	// �迭���� �� - 5�� �� �Է¹޾Ƽ� �հ� ���ϱ�
	// �� �����ϱ�
	//int arr[5], sum = 0; // try1: ����(���)�� ������ �� ���
						   // a���� �Ҵ�Ǵ� ������ ��Ÿ�ӽ�					   
	//int arr[LEN], sum = 0; // try2: ��� 5 ��� ��ũ�λ�� LEN���� ��ü 
	//					   // �޸𸮻� ������ ���������� �ʴ´�.
	//int size = sizeof(arr) / sizeof(int);
	//printf("���� �ټ����� �Է��ϼ���.\n");
	//// �� �Է¹ޱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d��° ���ڸ� �Է��ϰ� ���͸� ��������. ", i+1);
	//	scanf("%d", &arr[i]);
	//	if (i == 4) printf("\n(�ּ�)\n");
	//}
	//// �� �ּ�����ϱ�
	//for (int i = 0; i < size; i++) {
	//	printf("%d: %p\n", arr[i], &arr[i]);
	//}	
	//// �� �հ� ���ϱ�
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("\n�հ�� %d�Դϴ�.\n", sum);

	// �ǽ�) �� �л��� ������ �Է¹޾� ��ȣ��� �迭�� �����ϰ� �� ��ȣ ������� ����ϴ� ���α׷�
	int score[3], sum=0;
	int size = sizeof(score) / sizeof(int);
	// ���� �Է��ϱ�
	printf("������ �Է��ϼ���.\n");
	for (int i = 0; i < size; i++) {
		printf("%d���� ����: ", i + 1);
		scanf("%d", &score[i]); 
	}
	printf("\n----------------\n");
	// ���� ��Ÿ����
	for (int i = 0; i < size; i++) {
		printf("%d�� %d��\n", i + 1, score[i]);
		sum += score[i];
	}
	printf("\n----------------\n");
	// �հ�� ��� ���
	printf("�հ�: %d\n���: %.2f��\n", sum, (double)sum/size);
	printf("\n----------------\n");
	// �˻�
		// �׳� �� ���� �˻��� �� �ִ� �ܼ���
		/*int no;
		printf("�˻��� ��ȣ ");
		scanf("%d", &no);
		printf("������ %d ", score[no - 1]);*/
	//������ �˻��ϰ� q�� ������ �����ϰ� �����
	int no;
	char quit;
	while (1) {
		printf("�˻��� ��ȣ ");
		scanf("%d", &no);
		if (no < 1 || no>3) {					// �߸��� ��ȣ ó��
			printf("�߸��� ��ȣ\n");
			printf("**********************\n");
			continue;
		}
		printf("������ %d \n", score[no - 1]);
		printf("**********************\n");
		scanf("%c", &quit);
		if (quit == 'q'){
			printf("�����մϴ�");
			break;
		}
	}




















	return 0;
}