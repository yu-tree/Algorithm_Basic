#include<stdio.h>
int main(void) {
	int i, j, tmp, index,min;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (i = 0; i < 10; i++) {
		min = 999;
		for (int j = i; j < 10; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		printf("This is min : %d\n", min);
		//현재 arr[j]자리에는 i이후의 숫자중에 최소의 값이 들어있음
		//해당 arr[j]값을 swap해준다
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	printf("This is sorted numbers");
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}
}