/*
	�ִ밪 ���ϱ�00

	�� ���� ����(int ��)�� ���ڷ� �޾Ƽ� ū ���� ��ȯ�ϴ�
	�Լ� max()�� �ۼ��Ͻÿ�.
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