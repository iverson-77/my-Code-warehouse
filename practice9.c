#include<stdio.h>
int main()
{
	int a = 3;
	int b = 6;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d\n", a, b);
	return 0;
}