#include<stdio.h>
int main()
{
	int a = 3, b = 5;
	printf("%d %d %d", a&b, a | b, a^b);
	getchar();
	return 0;
}