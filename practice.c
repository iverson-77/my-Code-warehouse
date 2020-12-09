#include<stdio.h>
int main()
{
	int a, b, c;
	printf("请输入两个数：\n");
	scanf("%d %d", &a, &b);
	while (1){
		c = a%b;
		if (c == 0){
			break;
		}
		a = b;
		b = c;

	}
	printf("这两个数的最大公约数为：%d\n", b);
}