#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	//// 반복문 for
	//int i; // 반복할 변수
	//for (i = 0 ; i < 10 ; i++) { // i는 0부터 시작한다. i는 10보다 작다. i는 1씩 증가한다
	//							 // 이 세 조건을 한 번에 넣을 수 있다.
	//							 // 조건이 거짓이 될 때까지 계속 실행하고 탈출
	//	printf("%d\n", i);

	//}

	// 2단 구구단 만들기
	//int i; 
	//for (i = 1; i < 10; i++) { 
	//	printf("2*%d=%d\n", i, i*2);

	//}
	
	// 단수 입력받아 출력하는 구구단 만들기
	//int i, a; 
	//printf("몇단? ");
	//scanf("%d", &a);
	//for (i = 1; i < 10; i++) {
	//	printf("%d*%d=%d\n", a, i, i * a);
	//}

	// 이중 for문
	/*for (int i = 0; i < 10; i++) {
		printf("---------------\n");
		for (int j = 0; j < 10; j++) {
			printf("%d %d\n", i, j);
		}
	}*/
	// i가 0인 상태에서 j가 0부터 9까지 실행
	// i가 1인 상태로 돌아가서 다시 j가 0부터 9까지 실행
	// 이걸 i가 9가 될 때까지 실행

	// 구구단
	//for (int i = 2; i < 10; i++) {
	//	printf("\n[%d단]\n", i);
	//	for (int j = 1; j < 10; j++) {
	//		printf("%d * %d = %d\n", i, j, i*j);
	//	}
	//}
	
	// 실습) 1부터 100까지 합
	/*int sum=0;
	for (int i = 1; i < 101; i++) {
		sum += i;
	}
	printf("%d", sum);*/

	// 실습) 1부터 입력받은 수 까지의 합
	/*int a, sum = 0;
	printf("숫자를 입력하세요. ");
	scanf("%d", &a);
	for (int i = 0; i < a+1; i++) {
		sum += i;	
	}
	printf("%d", sum);*/

	// 실습) 두 수를 입력받아 큰 수에서 작은 수를 빼는 프로그램. 0을 누르면 종료
	/*int a, b = 0;
	for (int i = 0; i < 10 + 1; i++) {
		printf("숫자를 입력하세요. ");
		scanf("%d", &a);
		scanf("%d", &b);
		if (a==0) break;
		if (a > b) printf("차는 %d\n", a - b);
		else printf("차는 %d\n", b - a);
	}*/

	// 실습) 별찍기
	// 별 1-1
	/*for (int i = 1; i < 8; i++) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	// 별 1-2
	/*for (int i = 7; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	//별 2
	/*for (int i = 7; i > 0; i--) {
		for (int j = 0; j < i; j++){
			printf(" ");
		}
		for (int j = 8; j > i; j--){
			printf("*");
		}
		printf("\n");
	}*/
	// 별 3-1
	/*for (int i = 6; i > 0; i--) {
		for (int j = 6 - i; j < 6;j++) {
			printf(" ");
		}
		for (int j = i * 2 - 1; j < 12; j++) {
			printf("*");
		}
		printf("\n");
	}*/
	// 별 3-2
	/*for (int i = 1; i < 8; i++) {
		for (int j = 6-i; j < 6; j++) {
			printf(" ");
		}
		for (int j = i*2-1; j < 12; j++) {
			printf("*");
		}
		printf("\n");
	}*/


	// 실습) 두 숫자를 입력받아서 두 수 사이의 정수의 합을 계산하는 프로그램
	/*int a, b, sum = 0;
	printf("숫자 두 개를 입력하세요.\n");
	scanf("%d", &a);
	scanf("%d", &b);
	for (int x = a + 1; x < b; x++) {
		sum += x;
	}
	printf("%d", sum);*/

	// 실습) n 팩토리얼 구하기 ------------ 못하겠어!!
	/*int n, fac;
	printf("몇 팩토리얼을 구하고 싶으신가요? ");
	scanf("%d", &n);
	for (int i = 1; i < n + 1; i++) {
		fac = i * (i++);
	}
	printf("%d", fac);*/

	// 실습) 메뉴판
	// 문자로 받았을 때와 숫자로 받았을 때의 차이점
	// 숫자로 받았을 땐 4바이트짜리가 생성되지만 문자는 1바이트 아스키코드값을 받음
	char a;
	do {
		printf("1.짜장면, 2.짬뽕, 3.설렁탕, 4.비빔밥, 5.돈까스, 6.파스타, q.종료\n메뉴를 고르세요.\n");
		scanf("%c", &a);
		getchar();
		switch (a) {
		case 1:	case 2:
			printf("중식 코너로 가세요."); break;
		case 3: case 4:
			printf("한식 코너로 가세요."); break;
		case 5:	case 6:
			printf("양식 코너로 가세요."); break;
		default:
			printf("잘못된 숫자를 입력하였습니다.\n메뉴를 다시 선택 해 주세요. ");
		}
	}
	


















	return 0;
}