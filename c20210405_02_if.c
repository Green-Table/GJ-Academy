#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//if 조건문

	//if (조건){
	//	printf(참일 때 출력할 문장);
	//}else{
	//	printf(거짓일 때 출력할 문장);
	//	}


	//int a=-2;
	//if (a > 0){
	//	printf("%d은 양수입니다.", a);
	//}else{
	//	if (a < 0) {
	//		printf("%d은 음수입니다.", a);
	//	}else{
	//		printf("%d은 0입니다.", a);
	//	}
	//}

	//표현을 간단하게. 수행할 문장이 한 문장밖에 없으면 중괄호 쓰지 않아도 된다.
	//int a = -2;
	//if (a > 0)
	//	printf("%d은 양수입니다.", a);
	//else if (a < 0)
	//	printf("%d은 음수입니다.", a);
	//else
	//	printf("%d은 0입니다.", a);

	// 실습) 두 정수를 입력받아 큰 수를 출력(같을 경우도 고려)
	//int a, b;
	//printf("첫 번째 숫자: ");
	//scanf("%d", &a);
	//printf("두 번째 숫자: ");
	//scanf("%d", &b);
	//if (a > b)
	//	printf("%d는 %d보다 큽니다.", a, b);
	//else if (a < b)
	//	printf("%d는 %d보다 큽니다.", b, a);
	//else
	//	printf("%d와 %d는 같습니다.", a, b);

	// 실습) 학점출력프로그램
	//int a;
	//printf("학점: ");
	//scanf("%d", &a);
	//if (a<0 || a>100)
	//	printf("점수를 잘못 입력하였습니다.");
	//else if (a >= 90)
	//	printf("A학점입니다.");
	//else if (a >= 80)
	//	printf("B학점입니다.");
	//else if (a >= 70)
	//	printf("C학점입니다.");
	//else if (a >= 60)
	//	printf("D학점입니다.");
	//else
	//	printf("F학점입니다.");

	// 실습) 총점과 평균, 과락을 출력 해 주는 프로그램
	//int a, b, c;
	//printf("국어: ");
	//scanf("%d", &a);
	//printf("영어: ");
	//scanf("%d", &b);
	//printf("수학: ");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//if (a < 0 | b < 0 | c < 0 | a>100 | b>100 | c>100)
	//	printf("점수를 잘못 입력하였습니다.");
	//else if (a < 60 || b < 60 || c < 60)
	//	printf("과락입니다.");
	//else
	//	printf("총점: %d\n평균: %f\n", sum, sum / 3.);

	// 실습) 연도를 입력받아 윤년인지 여부를 출력
	//int y;
	//printf("연도: ");
	//scanf("%d", &y);
	//if (y % 4 == 0 && y % 100 != 0 || y % 400 == 0)
	//	printf("%d년은 윤년입니다.", y);
	//else
	//	printf("%d년은 윤년이 아닙니다.", y);

	// 실습)
	int a;
	printf("1.짜장면, 2.짬뽕, 3.설렁탕, 4.비빔밥, 5.돈까스, 6.파스타\n메뉴를 선택 해 주세요: ");
	scanf("%d", &a);
	if (a < 1 || a > 6)
		printf("번호를 잘못 입력하였습니다."); 
	else if (a == 1 || a == 2)
		printf("중식 코너로 가세요.");
	else if (a == 3 || a == 4)
		printf("한식 코너로 가세요.");
	else
		printf("양식 코너로 가세요.");


	return 0;
}