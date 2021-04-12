#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// do~while
	// 계속 수행해야 할지 말지를 나중에 결정
	//int a = -1;
	//	do {
	//		printf("%d", a);

	//	} while (a > 0); // 최소 한 번은 실행
	// 언제 유용한지:
	// 예) 사용자에게 입력을 받아서 y면 "뮤직 플레이" 출력
		//char answer = 'y'; // 이렇게 하면 입력을 아직 받지 않은 answer값을 선언했기 때문에 오류가 뜸
		//	while (answer == 'y') { 
		//		printf("뮤직 플레이 할까요(y)?");
		//		scanf("%c", &answer);
		//		getchar(); // 엔터값 처리
		//		printf("뮤직 플레이\n");
		//}	// 이런 문장을 do while을 이용해서 더 간단하게 만들 수 있음
		
	// 이 부분 선생님 파일 참고해야겠다.... 안 돌아간다...
	//char answer;
	//do {
	//	printf("뮤직 플레이\n");
	//	printf("계속 플레이 할까요(y)?");
	//	scanf("%c", &answer);
	//	getchar();
	//} while (answer == 'y');

	// 실습) 어떤 정수를 계속 입력받아서 합계를 더하고 0을 입력할 경우 종료하는 프로그램
	int a;
	do {
		getchar();
		printf("정수를 입력하세요. %d", a);
		scanf("%d", a);
		a++;
	} while (a = 0);
		printf("%d", a);
	




	return 0;
}