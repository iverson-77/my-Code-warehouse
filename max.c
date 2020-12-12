#include<stdio.h>
int main()
{
	int a[10] = { 32, 56, 14, 23, 5, 86, 45, 17, 62, 46 };
	int b = a[0];
	for (int i = 0; i <= 9; i++){
		if (a[i + 1]>b)
		{
			b = a[i + 1];
		}
	}
	printf("最大值为%d：\n", b);
	return 0;
}