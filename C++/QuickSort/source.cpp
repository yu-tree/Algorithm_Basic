#include <stdio.h>
int arr[10] = { 1,10,5,8,7,6,4,3,2,9 };
int number = 10;
//number�� �����ؾߵ� �׷��� ���� ��, 10��
void QuickSort(int *data,int start, int end) {
	//start�� end�� ������ �Ϸ��� �������� ó������ ������ ���� index
	if (start >= end) {
		//���Ұ� 1���� ���
		return;
	}
	int key = start; //Ű�� �켱 ù��° ����
	//��� ������ ����Ѵ�. 
	// i�� ���������� ����ϴ� ����
	// j�� �������� ����ϴ� ����
	int i = start + 1;
	int j = end;
	int temp;

	while (i <= j) {
		//�������� ���� ������ while���� ��� ����
		while (data[i] >= data[key]&&i<=end) {
			i++;
		}
		while (data[j] <= data[key]&&j>start) {
			j--;
		}
		if (i > j) {
			//���� ���� ������ ���°� �Ǿ��ٸ�, Ű ���� ��ü�ϴ� �۾��� �Ѵ�.
			temp = data[j];
			data[j] = data[key];
			data[key] = temp;
		}
		else {
			//ã�� ������ �ε����� ���� �������� �ʾѴٸ�
			//���� �� j�� ū�� i�� �ε����� ����Ű�� ����
			//��ü�Ѵ�
			temp = data[j];
			data[j] = data[i];
			data[i] = temp;
		}
	}
	//������ ���°� �Ǿ��ٴ� ��
	//�� ���� key���� �� �ڸ��� ��������
	//Ű������ ���� �׷��
	//Ű������ ū �׷� ���� �������� ����
	//�� �׷��� ���� quicksort �����Ѵ�.
	QuickSort(data, start, j - 1);
	QuickSort(data, j + 1, end);
}
int main(void) {
	QuickSort(arr, 0, number-1);
	for (int i = 0; i < number; i++) {
		printf("%d ", arr[i]);
	}
}