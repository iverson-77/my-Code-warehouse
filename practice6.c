#include<stdio.h>

void leap(int x)
{
	if (x % 4 == 0)
		printf("��\n");
	else
		printf("����\n");
}

int main()
{
	int x;
	printf("������һ����ݣ�\n");
	scanf("%d", &x);
	leap(x);
}