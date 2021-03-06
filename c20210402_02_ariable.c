#include <stdio.h>
int main() {
	//int a; // 정수형 변수명을 선언, 4byte짜리 선언이 만들어진다.
	//a = 10; // 초기화
	//printf("%d\n", a);
	//
	//float f; //실수형 변수명 선언, 4byte짜리
	//f = 3.1462126215695489847;
	//printf("%.15f\n", f);

	//double d; // 초기화, 8byte 차지
	//d = 3.1462126215695489847;
	//printf("%.15f\n", d);

	// float와 double의 차이는 '정밀도'의 차이. 
	// double는 정밀도가 높지만 용량을 더 잡아먹는다. 특히 소수점 아래 6자리가 넘어가면 더욱 정밀도 이슈가 발생하기 쉽다.
	// 단, 현재 컴퓨터 용량으론 d도 충분히 커버 可

	//char c = 'A'; // 문자형, 작은 따옴표를 사용한다. 선언과 동시에 초기화 하려면 바로 ='' 쓰면 됨
	//printf("문자는 %c %d\n", c, c); // 이 때 뒤에 나오는 숫자는 '아스키코드'값. 지금은 65가 나온다.

	// ======================================
	
	//데이터형의 바이트수
	//int a = 100;
	//printf("정수형: %d\n", sizeof(a)); // 실제로 몇 바이트를 차지했는지 확인 可
	//float f = 3.14;
	//double d = 3.14;
	//printf("플롵의 사이즈: %d\n", sizeof(f));
	//printf("더블의 사이즈: %d\n", sizeof(d));

	//char c = 'a'; 
	//printf("캐릭터형의 사이즈: %d\n", sizeof('a'));
	
	// ======================================

	// 문자열이라는 형은 만들 수 없다.
	// 문자열은 캐릭터의 형태로 저장이 되며, char c[]로 문자열 선언 可
	// 문자열이 5글자면 [6] 쳐야 함. 마지막은 \0(nul문자)에 할당됨. 
	// 배열의 이름은 주소를 가지고 있다.
	//char c[6]="hello";
	//printf("%s\n", c);


	// 글자 수 하나하나 셀 필요 없이 [] 안에 아무것도 넣지 않으면 알아서 문자열 선언 됨
	// 단, 선언과 동시에 초기화 할 때만 배열 크기 생략 可
	// c는 상수다. 상수는 변경이 안 된다. 따라서 선언과 동시에 초기화 하지 않고 따로 두 줄을 만들면 출력이 안 된다.
	// 예를 들어 char c[6] 하고 다음 줄에 c="hello" 치면 값이 안 나온다.
	char c[]="hello C!!";
	printf("%s\n", c);
	printf("%c\n", c[0]); // 첫 문자부터 0번 1번 2번 순서대로, 이 경우 0번째 문자인 h가 출력된다.
	printf("문자열:%s	크기:%d\n", c, sizeof(c));


	return 0;
}