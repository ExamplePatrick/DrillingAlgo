/*
	최대값 구하기00

	두 개의 정수(int 형)를 인자로 받아서 큰 값을 반환하는
	함수 max()를 작성하시오.
*/

#include <stdio.h>

int max(int x, int y);

int main() {

	int a, b;

	printf("input two integer : ");
	scanf("%d%d", &a, &b);

	printf("max : %d\n", max(a, b));

	return 0;
}


int max(int x, int y) {
	if (x > y) return x;
	return y;
}