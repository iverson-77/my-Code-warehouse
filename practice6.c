#include<stdio.h>

void leap(int x)
{
	if (x % 4 == 0)
		printf("是\n");
	else
		printf("不是\n");
}

int main()
{
	int x;
	printf("请输入一个年份：\n");
	scanf("%d", &x);
	leap(x);
}