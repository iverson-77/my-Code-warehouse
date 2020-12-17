#include<stdio.h>
int main()
{
	int x;
	printf("请输入要打印的乘法口诀表的行列：");
	scanf("%d", &x);
	int m;
	for (int i = 1; i <= x; i++){
		for (int j = i; j <= x; j++){
			m = i*j;
			printf("%d*%d=%d ",i,j, m);
		}
		printf("\n");
	}
}