#include <stdio.h>
int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int number = 10;
//number는 정렬해야될 그룹의 원소 수, 10임
void QuickSort(int *data,int start, int end) {
	//start와 end는 정렬을 하려는 범위에서 처음값과 마지막 값의 index
	if (start >= end) {
		//원소가 1개인 경우
		return;
	}
	int key = start; //키는 우선 첫번째 원소
	//출발 지점을 명시한다. 
	// i는 오른쪽으로 출발하는 지점
	// j는 왼쪽으로 출발하는 지점
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {
		//엇갈리지 않을 때에는 while문이 계속 진행
		while (data[i] >= data[key]&&i<=end) {
			i++;
		}
		while (data[j] <= data[key]&&j>start) {
			j--;
		}
		if (i > j) {
			//만약 현재 엇갈린 상태가 되엇다면, 키 값과 교체하는 작업을 한다.
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			//찾은 값들의 인덱스가 아직 엇갈리지 않앗다면
			//작은 값 j와 큰값 i의 인덱스가 가리키는 값을
			//교체한다
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	//엇갈린 상태가 되었다는 것
	//즉 이제 key값이 들어간 자리를 기준으로
	//키값보다 작은 그룹과
	//키값보다 큰 그룹 으로 나누어진 상태
	//두 그룹을 각각 quicksort 진행한다.
	QuickSort(data, start, j - 1);
	QuickSort(data, j + 1, end);
}
int main(void) {
	QuickSort(arr, 0, number-1);
	for (int i = 0; i < number; i++) {
		printf("%d ", arr[i]);
	}
}