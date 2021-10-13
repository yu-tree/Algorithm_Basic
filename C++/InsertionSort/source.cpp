#include <stdio.h>
int main(void) {
	int tmp, i, j, min,index;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 9; i++) {
		j = i;
		/*
		//같은 코드
		while (arr[j] > arr[j + 1]) {
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
			j--;
		}
		*/
		for (j = i; arr[j] > arr[j + 1]; j--) {
			tmp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = tmp;
		}
	}
	for (i = 0; i < 10; i++) {
		printf("%d ", arr[i]);
	}
}
