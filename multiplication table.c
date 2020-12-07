#include<stdio.h>
int main()
{
	for (int i = 1; i <= 9; i++)
	{
		for (int j = i; j <= 9; j++)
		{
			int num;
			num = i*j;
			printf("%d*%d=%d\n", i, j, num);
		}
	}
	return 0;
}