#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <Windows.h>

int main() {
	// 카운트다운
	printf("카운트다운 시작 \n");
	for (int i = 5; i > -1; i--) {
		SLeep(1000);
		print("%d초\n", i);
	}
	print("발사\n");





	return 0;
}