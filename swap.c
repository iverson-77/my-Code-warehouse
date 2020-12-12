#include<stdio.h>

void swap(int* px, int* py) // 形参
{
	int tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a, b, c;
	printf("请输入任意三个数\n");
	scanf("%d %d %d", &a, &b, &c);
	if (a > b)
	{
		swap(&a, &b); // 实参
	}

	if (b > c)
	{
		swap(&b, &c);
	}

	if (a > b)
	{
		swap(&a, &b);
	}
	printf("这三个数从小到大依次为%d %d %d：\n", a, b, c);

	return 0;
}