#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// switch~case 조건문
	//int a = 1;
	//switch (a) {
	//case 0:
	//	printf("zero\n"); break;
	//case 1:
	//	printf("one\n"); break;
	//case 2:
	//	printf("two\n"); break;
	//default:
	//	printf("잘못된 숫자\n");
	//}
	// 스위치문은 중괄호가 하나
	// 브레이크를 통해 이후의 출력을 멈출 수 있다.

	// 실습) 월의 마지막 날을 출력하시오
	//int a;
	//printf("몇월의 마지막 날이 궁금해? ");
	//scanf("%d", &a);
	//switch (a) {
	//case 0:
	//	printf("잘못된 숫자를 입력하였습니다."); break;
	//case 1:	case 3:	case 5:	case 7:	case 8: case 10: case 12:
	//	printf("31일"); break;
	//case 2:
	//	printf("28일"); break;
	//case 4:	case 6:	case 9:	case 11:
	//	printf("30일"); break;
	//default:
	//	printf("잘못된 숫자를 입력하였습니다.");
	//}
	// 이런 식으로 순서를 바꿔놓아도 상관 없다. 값이 같다면 break를 안 써주면 된다.

	// 실습)
	int a;
	printf("1.짜장면, 2.짬뽕, 3.설렁탕, 4.비빔밥, 5.돈까스, 6.파스타\n메뉴를 선택 해 주세요: ");
	scanf("%d", &a);
	switch (a) {
	case 0:
		printf("잘못된 숫자를 입력하였습니다."); break;
	case 1:	case 2:	
		printf("한식 코너로 가세요."); break;
	case 3: case 4:
		printf("한식 코너로 가세요."); break;
	case 5:	case 6:
		printf("양식 코너로 가세요."); break;
	default:
		printf("잘못된 숫자를 입력하였습니다.");
	}





	return 0;
}