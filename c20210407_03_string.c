#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	// 문자의 입력과 출력
	/*char c = 'a';
	scanf("%c", &c);
	printf("%c\n", c);*/

	//getchar();란 무엇인가?
	/*char c = getchar(); // 문자 입력 전용함수
	putchar(c);*/ // 문자 출력 전용함수. 무엇을 출력할지 넘겨주면 된다.
	// 이렇게 치면 위에 단순하게 c를 입력하고 c를 출력한다는 코드와 동일하게 출력된다.
	// 포멧문자열을 쓰지 않아도 된다는 장점
	// int도 쓸 수 있다. "문자 전용"이지만, char(캐릭터)가 아닌 int(인티져)로도 받을 수 있다.
		// ex)
			/*int c = getchar(); // 문자 입력 전용함수
			putchar(c);*/

	// getch()함수는 내가 친 문자가 콘솔창에 보이지 않는다
	// 이에 getch()함수는 "에코기능이 없다"고 표현한다.
		//반면 getchar()함수는 화면에 바로 보이므로 "에코기능이 있다고 표현한다.
	/*char c = getch();
	printf("입력문자 ");
	putchar(c);*/
	// 이러면 문자를 입력해도 콘솔창에 표시되지 않고, 엔터를 쳐서 putchar를 불러와야만 보인다.

	// 실습) 4자리 비밀번호를 찍으면 별표만 보이게 만드는 프로그램
	/*char pw[5];
	printf("passward? ");
	for (int i = 0; i < 4; i++){
		pw[i] = getch();
			putchar('*');
	}*/
	//pw[4] = '\0'; // 5번째 글자를 "문자열"로서 인식되게끔 \0를 포함시킴
	//printf("\n비밀번호:%s\n", pw); // 문자열을 출력하는 포멧은 %s

	// 문자열 전용함수
	/*char name[20];
	printf("이름은? ");
	gets(name);
	printf("Your name is "); 
	puts(name);*/

	char @@과 




	return 0;
}