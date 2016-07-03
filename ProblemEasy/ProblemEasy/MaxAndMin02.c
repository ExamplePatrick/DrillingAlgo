/*
	최대값 구하기02

	배열(int 형)을 인자로 받아서 가장 큰 값을 반환하는
	함수 max()를 작성하시오.
*/

#include <stdio.h>

#define ARR_SIZE 5

int max(int arr[], int arr_len);

int main() {

	int arr[5], i;

	printf("input five integer : ");
	
	for (i = 0; i < ARR_SIZE; i++) {
		scanf("%d", &arr[i]);
	}

	printf("max : %d\n", arr[max(arr, ARR_SIZE)]);

	return 0;
}

int max(int arr[], int arr_len) {

	int max, i;

	max = 0;
	for (i = 1; i < arr_len; i++) {
		if (arr[i] > arr[max]) max = i;
	}

	return max;
}

