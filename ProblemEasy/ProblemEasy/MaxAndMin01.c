/*
	�ִ밪 ���ϱ�01

	�� ���� ����(int ��)�� ���ڷ� �޾Ƽ� ���� ū ���� ��ȯ�ϴ�
	�Լ� max()�� �ۼ��Ͻÿ�.
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