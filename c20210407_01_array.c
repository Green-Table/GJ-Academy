#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//배열 array
	/*int arr[3];
	arr[0] = 10; arr[1] = 20; arr[2] = 30;
	printf("%d %d %d\n", arr[0], arr[1], arr[2]);
	printf("%¿ %d", arr[0], sizeof(arr*/


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


	// 실습) 더블형으로
	/*double arr[3] = {1.1, 2.2, 3.3};
	for (int i = 0; i < 3; i++) {
		printf("%.1f\n", arr[i]);
	}*/

	// 반복문을 이용해서 초기화
	/*double arr[3];
	for (int i = 0; i < 3; i++) {
		arr[i] = i+1 + ((i+1) * 0.1);
		printf("%.1f\n", arr[i]);
	}*/

	// 배열의 크기 구하기
	/*double arr[3];
	int size = sizeof(arr) / sizeof(double);
	printf("사이즈: %d\n", size);

	for (int i = 0; i < size; i++) {
		printf("%.1f", arr[i]);
	}*/

	// 문자형 배열
	/*char arr[] = {'p','y','t','h','o','n' };
	int size = sizeof(arr) / sizeof(char);
	for (int i = 0; i < size; i++) {
		printf("%c", arr[i]);
	}*/
	//이렇게 하면 숫자(혹은 문자)가 늘어나도 변수를 바꿔주지 않아도 됩니다.

	// 배열값의 합
	/*int arr[] = {4,5,9,12,34};
	int size = sizeof(arr) / sizeof(int);
	int sum = 0;
	for (int i = 0; i < size; i++){
		sum += arr[i];
	}
	printf("%d", sum);*/

	// 배열값의 합 - 5개 값 입력받아서 합계 구하기
	// ① 선언하기
	//int arr[5], sum = 0; // try1: 숫자(상수)를 지정해 준 방법
						   // a값이 할당되는 시점은 런타임시					   
	//int arr[LEN], sum = 0; // try2: 상수 5 대신 매크로상수 LEN으로 대체 
	//					   // 메모리상 공간을 차지하지는 않는다.
	//int size = sizeof(arr) / sizeof(int);
	//printf("숫자 다섯개를 입력하세요.\n");
	//// ② 입력받기
	//for (int i = 0; i < size; i++) {
	//	printf("%d번째 숫자를 입력하고 엔터를 누르세요. ", i+1);
	//	scanf("%d", &arr[i]);
	//	if (i == 4) printf("\n(주소)\n");
	//}
	//// ③ 주소출력하기
	//for (int i = 0; i < size; i++) {
	//	printf("%d: %p\n", arr[i], &arr[i]);
	//}	
	//// ④ 합계 구하기
	//for (int i = 0; i < size; i++) {
	//	sum += arr[i];
	//}
	//printf("\n합계는 %d입니다.\n", sum);

	// 실습) 반 학생의 점수를 입력받아 번호대로 배열에 저장하고 반 번호 순서대로 출력하는 프로그램
	int score[3], sum=0;
	int size = sizeof(score) / sizeof(int);
	// 점수 입력하기
	printf("점수를 입력하세요.\n");
	for (int i = 0; i < size; i++) {
		printf("%d번의 점수: ", i + 1);
		scanf("%d", &score[i]); 
	}
	printf("\n----------------\n");
	// 점수 나타내기
	for (int i = 0; i < size; i++) {
		printf("%d번 %d점\n", i + 1, score[i]);
		sum += score[i];
	}
	printf("\n----------------\n");
	// 합계와 평균 출력
	printf("합계: %d\n평균: %.2f점\n", sum, (double)sum/size);
	printf("\n----------------\n");
	// 검색
		// 그냥 한 번만 검색할 수 있는 단순툴
		/*int no;
		printf("검색할 번호 ");
		scanf("%d", &no);
		printf("점수는 %d ", score[no - 1]);*/
	//여러번 검색하고 q를 누르면 종료하게 만들기
	int no;
	char quit;
	while (1) {
		printf("검색할 번호 ");
		scanf("%d", &no);
		if (no < 1 || no>3) {					// 잘못된 번호 처리
			printf("잘못된 번호\n");
			printf("**********************\n");
			continue;
		}
		printf("점수는 %d \n", score[no - 1]);
		printf("**********************\n");
		scanf("%c", &quit);
		if (quit == 'q'){
			printf("종료합니다");
			break;
		}
	}




















	return 0;
}