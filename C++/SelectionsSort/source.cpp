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
		//���� arr[j]�ڸ����� i������ �����߿� �ּ��� ���� �������
		//�ش� arr[j]���� swap���ش�
		tmp = arr[i];
		arr[i] = arr[index];
		arr[index] = tmp;
	}
	printf("This is sorted numbers");
	for (int i = 0; i < 10; i++) {
		printf("%d", arr[i]);
	}
}