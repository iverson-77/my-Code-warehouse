#include<stdio.h>

int main()
{
	int x;
	scanf("%d", &x);
	int sum = 0;
	int tmp = 0;
	for (int i = 0; i < 5; i++){
		tmp = tmp * 10 + x;
		sum += tmp;
	}
	printf("%d\n", sum);
	return 0;
}