#include<stdio.h>

void swap(int* px, int* py) // �β�
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a, b, c;
	printf("����������������\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		swap(&a, &b); // ʵ��
	}

	if (b > c)
	{
		swap(&b, &c);
	}

	if (a > b)
	{
		swap(&a, &b);
	}
	printf("����������С��������Ϊ%d %d %d��\n", a, b, c);

	return 0;
}