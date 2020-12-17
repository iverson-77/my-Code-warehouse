#include<stdio.h>

int factorial_1(int n)
{
	int sum = 1;
	for (int i = 1; i <= n; i++){
		sum = sum*i;
	}
	return sum;
}

int factorial_2(int n){
	if (n == 1){
		return 1;
	}
	return n*factorial_2(n - 1);

}
int main()
{
	int x;
	printf("请输入要阶乘的数：\n");
	scanf("%d", &x);
	factorial_1(x);
	printf("%d\n", factorial_1(x));
	int y;
	printf("请输入要阶乘的数：\n");
	scanf("%d", &y);
	factorial_2(y);
	printf("%d\n", factorial_2(y));
	return 0;
}