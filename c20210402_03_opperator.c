#include <stdio.h>
int main() {
	// 연산자(+, -, *, /, %)
	// 정수와 정수 => 정수
	// 실수와 정수 => 실수
	//int a = 20, b = 3; // 같은 인티져인 경우 줄 바꿔서 쓸 필요 없이 연달아서 쓰면 ok
	//printf("%d+%d=%d\n", a, b, a + b);
	//printf("%d-%d=%d\n", a, b, a - b);
	//printf("%d*%d=%d\n", a, b, a * b);
	//printf("%d/%d=%f\n", a, b, a / b); // %f를 쓰면 0.000000으로 출력되는데, 최초 지정된 값이 정수면 %d로 치는 게 맞기 때문이다.
	//printf("%d/%d=%.2f\n", a, b, (double)a / b); // 따라서 a를 더블로 바꿔서 '실수'로 만들어야 %f를 쓸 수 있다.
	//											 // a를 실수로 바꾸면 실수/정수 연산이기 때문에 실수가 되기 때문이다.
	//											 // b를 더블로 실수로 만들 수도 있지만, 안 예쁘다.
	//											 // float를 사용할 수도 있지만, 더블이 기본이고 굳이 float를 쓸 필요는 없다.
	//printf("%d %% %d=%d\n", a, b, a % b); // %는 포멧문자이므로 확실하게 나머지를 구하는 연산자로 사용한다는 의미에서 2번 기입


	// 연습문제)
	//int a = 50, b = 3;
	//printf("몫: %d / %d = %d\n", a, b, a / b);
	//printf("나머지: %d %% %d = %d\n", a, b, a % b);
	//printf("실수값: %d / %d = %.2f\n", a, b, (double)a / b);

	//int a = 50, b = 3;
	//printf("몫: %d\n", a / b);
	//printf("나머지: %d\n", a % b);
	//printf("실수값: %.4f\n", (double)a / b);

	// ======================================
	 
	// 단항연산자
	// - 부호연산자
	// 	 +, -
	// - 증감연산자
	// 	 ++
	// - 복합연산자
	//	 +=, -= 
	//int a = 10;
	//a++; 
	//printf("%d\n", a); // a+1=a와 똑같은 값이 나온다.
	// 문자 앞에 ++ 붙이면 "전위", 뒤에 붙이면 "후위", 값은 같다.

	//int a = 10;
	//printf("%d\n", a++); // 이렇게 하면 11이 아니라 10이 나온다.
	//printf("%d\n", a); // 근데 얘는 쁠쁠 안 붙였는데도 11이 나온다. 왜 그럴까?
	//// 후위로 붙이면 "출력을 하고 증가해라". 따라서 첫 프린트에선 먼저 10을 출력하고 증가하기 때문에 두 번째 프린트에서 11이 출력됨
	//printf("%d\n", ++a); // 이번엔 전위, "증가하고 출력해"이기 때문에 이번에는 12가 출력됨.

	// 연습문제)
	//int a = 10;
	//int b = --a;
	//int c = b++;
	//b = ++a;
	//printf("%d %d %d\n", a, b, c);
	// a는 그대로 10
	// b는 -1한 후 +1 다시 했기 때문에 10
	// c는 b의 두번째 연산 전에 했기 때문에 -1만 된 상태에서 그대로 출력하므로 9(이후에 +1된 건 출력 한 후의 일)

	// -------------------------------------------

	// 관계연산자: <, >, ==, !=
	//int a = 10, b = 20;
	//printf("%d\n", a < b); // 참일 경우 1이 나옴
	//printf("%d\n", a > b); // 거짓일 경우 0이 나옴.
	//printf("%d\n", a == b); // 같지 않으니까 거짓, 0이 나옴
	//printf("%d\n", a != b); // 같지 않으니까 참, 1이 나옴

	// -------------------------------------------

	// 논리연산자: &&, ||, !
	//int a = 10, b = 20;
	//printf("%d\n", a > 0 && b < 0); // a가 0보다 크냐? "그리고(&&)" b가 0보다 크냐?
	//								// 둘 중에 하나라도 참이 아니면 거짓, 0이 나옴. 둘 다 참이어야 1이 나옴
	//printf("%d\n", a > 0 || b < 0); // a가 0보다 크냐? "또는(||)" b가 0보다 크냐?
	//								// 둘 중에 하나라도 참이면 참, 1이 나옴. 둘 다 거짓이어야 0이 나옴
	//printf("%d\n", !(a > 0)); // 참과 거짓을 역전시켜서 출력함. 참이면 0이 나오고 거짓이면 1이 나옴

	// -------------------------------------------

	// 비트연산자: &, |, ^, ~
	//printf("%d\n", 4 & 3); // 0이 나옴.
	//					   // 왜? 이진수로 4는 0100, 3은 0011, 각 비트끼리 연산해서 둘 다 1이어야 1로 출력
	//					   // 이 경우 0000이 나오므로 0이 나옴
	//printf("%d\n", 4 | 3); // 7이 나옴
	//					   // 왜? 이진수로 4는 0100, 3은 0011, 각 비트끼리 연산해서 둘 중 하나가 1이면 1로 출력
	//					   // 이 경우 0111이 나오므로 7이 나옴
	// 시프트연산자: <<, >>
	//printf("%d\n", 7 >> 1); // 7은 0111인데, >> 1 사용하면 왼쪽으로 한 개 밀어서 0011. 10진수로 바꾸면 3이므로 3이 출력됨.
	
	// -------------------------------------------

	// 삼항연산자: 조건에 따라 수행하는 문장이 달라진다. 
	// 참일 때 수행할 문장, 거짓일 때 수행할 문장을 지정할 수 있음
	// 즉, 간단한 if문을 쓸 때 사용하기 좋다.
	//int a = 10;
	//a > 0 ? printf("양수") : printf("음수"); // 참일 경우 "양수" 출력, 거짓일 경우 "음수"가 출력되게 설정하였다.

	// 두 숫자 중 큰 수를 출력하고 싶다면
	//int a = 10, b = 20;
	//a > b ? printf("%d\n", a) : printf("%d\n", b); // 참일 경우 a값 출력, 거짓일 경우 b값 출력. 
													 // 이 경우 b가 더 크므로 거짓.즉 큰 수인 b값, 20이 출력된다.

	//int c = a > b ? a: b; // 바로 출력하지 않고, 비교해 둔 값을 따로 c로 지정하였다.
	//printf("%d", c); // 이렇게 해도 마찬가지로 따로 비교해 둔 c값, 20이 출력된다.

	//연습문제) 가장 큰 값을 출력하라
	//int a = 20, b = 10, c = 30;
	//int d = a > b ? a : b;
	//int e = d > c ? d : c;
	//printf("가장 큰 값은 %d입니다.", e);
	// a와 b를 비교해서 큰 값을 d로 빼 둔 다음 그 d값과 c를 비교해서 큰 값을 e로 지정하였다. 이 후 e를 출력하였다.
	// 두 번 비교했으므로 가장 큰 값인 30이 출력된다.

	//int a = 20, b = 10, c = 30;
	//int d = a > b ? a : b;
	//d > c ? printf("가장 큰 값은 %d입니다.", d) : printf("가장 큰 값은 %d입니다.", c);
	// 이렇게 해도 가장 큰 값인 30이 출력된다.

	// 삼항연산자를 한 줄에 두 번 쓰는 방법도 있다.
	//int a = 20, b = 10, c = 30;
	//int d = a > b ? (a > c ? a : c) : (b > c ? b : c);
	//printf("%d\n", d);

	//연습문제2) 짝수와 홀수를 판별하여 출력하시오
	//int x1 = 6, x2 = 9;
	//int a = x1 % 2, s1 = a < 1 ? "은" : "는";
	//a < 1 ? printf("%d%s 짝수입니다.\n", x1, s1) : printf("%d는 홀수입니다.\n", x1, s1);
	//int b = x2 % 2, s2 = b < 1 ? "은" : "는";
	//b < 1 ? printf("%d%s 짝수입니다.\n", x2, s2) : printf("%d%s 홀수입니다.\n", x2, s2);
	

return 0;
}