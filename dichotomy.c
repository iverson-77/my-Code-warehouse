#include<stdio.h>

int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int x;
	printf("��������Ҫ���ҵ�����:\n");
	scanf("%d", &x);
	int right = sizeof(a) / sizeof(a[0]) - 1;
	int left = 0;
	while (left <= right){
		int mid = (left + right) / 2;
		if (x > a[mid]){
			left = mid + 1;
		}
		else if (x < a[mid]){
			right = mid - 1;
		}
		else{
			printf("�ҵ��ˣ��±��ǣ�%d\n", mid);
			break;
		}
	}
	if (left>right)
		printf("�Ҳ���\n");

}