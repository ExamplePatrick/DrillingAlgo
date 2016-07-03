/*
	최대값 구하기01

	세 개의 정수(int 형)를 인자로 받아서 가장 큰 값을 반환하는
	함수 max()를 작성하시오.
*/

#include <stdio.h>

int max(int x, int y, int z);

int main() {

	int a, b, c;

	printf("input three integer : ");
	scanf("%d%d%d", &a, &b, &c);

	printf("max : %d\n", max(a, b, c));

	return 0;
}


int max(int x, int y, int z) {
	
	if (x > y) {
		if (x > z) return x;
		else return z;
	}
	else {
		if (y > z) return y;
		else return z;
	}
}