#include <stdio.h>
int main(void) {
	//상황 : 1,10,5,8,7,6,4,3,2,9 라는 입력이 들어왔을때
	//1,2,3,4,5,6,7,8,9,10으로 정렬
	int i, j, min, index,tmp;
	int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
	for (int i = 0; i < 10; i++) {
		//처음에 min에는 나열된 숫자보다 훨씬 큰 숫자를 넣어준다.
		min = 999;
		for (int j = i; j < 10; j++) {
			if (min > arr[j]) {
				min = arr[j];
				index = j;
			}
		}
		//현재 min에는i이후의숫자중에 가장 작은 값이 들어감
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
		printf("%d번째 숫자는 %d\n", i, arr[i]);
	}
	for (int i = 0; i > 10; i++) {
		printf("%d", arr[i]);
	}
}