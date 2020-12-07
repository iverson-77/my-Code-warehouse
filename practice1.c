#include<stdio.h>
int main()
{
	printf("请输入两个数\n");
	int a, b;
	scanf("%d %d", &a, &b);
	int i;
	if (a > b){
		i = b;
	}
	else
		i = a;
	while (a%i != 0 || b%i != 0){
		i--;
	}
	printf("这两个数的最大公约数为：%d\n", i);
	return 0;
	getchar();
}