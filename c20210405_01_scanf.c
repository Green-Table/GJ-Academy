#define _CRT_SECURE_NO_WARNINGS // scanf함수를 사용하기 위해서 이 경고를 먼저 처리해야 함
#include <stdio.h>
int main() {
	//입력함수
	//int a; // 4바이트 공간 선언이 먼저 되어야 함
	//printf("정수는? ");
	//scanf("%d", &a); // a의 주소를 가져온다는 의미.
	//				 //"출력"할 것이 아니기 때문에 줄 띄우기 "\n"은 쓰지 않는다.
	//printf("입력한 값: %d		주소:%p\n", a, &a); // 주소를 입력하는 포멧문자열은 %p
	//										   // 주소라 함은 이 정보가 입력된 물리적 위치?

	//----------------------------------------------------------
	
	// 실수형 입력받기
	//float f;
	//double d;
	//printf("float 실수는? ");
	//scanf("%f", &f);
	//printf("double 실수는? ");
	//scanf("%lf", &d); // 더블형 실수 스캔 할 땐 lf로 써줘야 한다.
	//printf("입력한 값 / 주소\n %f %p\n %f %p\n", f, &f, d, &d);

	//------------------------------------------------------------
	
	// 문자형 입력받기
	//char c;
	//printf("문자는? ");
	//scanf("%c", &c);
	//printf("입력한 값은 %c\n", c);

	// 실습) 두 정수를 입력받아서 합계를 출력하라
	//int a, b;
	//printf("첫 번째 정수는? ");
	//scanf("%d", &a);
	//printf("두 번째 정수는? ");
	//scanf("%d", &b);
	//printf("두 수의 합계는? %d\n", a + b);
	
	// 실습) 오늘의 날짜(년,월,일)을 입력받아 출력
	//int y, m, d;
	//scanf("%d %d %d", &y, &m, &d);
	//printf("오늘의 날짜는 %d년 %d월 %d일 입니다.\n", y, m, d);
		
	// 실습) 산술연산을 구하여라
	//int a, b;
	//printf("두 정수를 입력하세요: ");
	//scanf("%d %d", &a, &b);
	//printf("%d + %d = %d\n", a, b, a + b);
	//printf("%d - %d = %d\n", a, b, a - b);
	//printf("%d * %d = %d\n", a, b, a * b);
	//printf("%d / %d = %.3f\n", a, b, (double)a / b);

	// 중간에 문자가 들어간 경우 처리방법
	//int a, b;
	//char sign;
	//printf("first: ");
	//scanf("%d", &a);
	//printf("sign: ");
	//getchar(); // getchar를 써서 엔터를 처리 해 줘야 한다. 반환함수라고 한다.
	//scanf("%c", &sign); // getchar를 안 쓰면 "엔터"를 문자로 처리하기 때문에 "sign"은 엔터가 돼버린다.
	//printf("second: ");
	//scanf("%d", &b);
	//printf("%d %c %d\n", a, sign, b);

	// 실습)물건 구입 후 거스름돈을 계산하여 출력하는 프로그램을 완성하시오
	//int a, b;
	//printf("물건 값은? ");
	//scanf("%d", &a);
	//printf("받은 돈은? ");
	//scanf("%d", &b);
	//a < b ? 
	//	printf("거스름돈은 %d원 입니다", b - a) : 
	//	(a > b ? printf("잔액이 %d원 부족합니다", a - b) : printf("지불이 정상적으로 완료되었습니다"));

	// 실습)국영수 점수를 입력받아 합계와 평균을 구하는 프로그램을 완성하시오
	//int a, b, c;
	//printf("국어 점수를 입력하세요. ");
	//scanf("%d", &a);
	//printf("영어 점수를 입력하세요. ");
	//scanf("%d", &b);
	//printf("수학 점수를 입력하세요. ");
	//scanf("%d", &c);
	//int sum = a + b + c;
	//printf("합계 %d점, 평균 %.2f점 입니다.", sum, sum/3.);

	//---------------------------------------------------------------

	// unsigned int는 int와 달리 음수를 취급하지 않아서 int보다 더 많은 데이터를 처리할 수 있다.
	// unsigned int를 이용해서 RGB값을 만들어 보자
	//int r, g, b;
	//printf("red? "); scanf("%d", &r);
	//printf("green? "); scanf("%d", &g);
	//printf("blue? "); scanf("%d", &b);
	//unsigned int rgb = r<<16 | g<<8 | b;
	//printf("RGB: %0X\n", rgb); // 16진수 포멧문자열은 퍼센트 제로 엑스(대문자)

	return 0;
}