#include<stdio.h>

int main()
{
	int a[] = { 1, 2, 3, 4, 5 };
	int b[] = { 6, 7, 8, 9, 10 };
	int c[5] = { 0 };
	for (int i = 0; i <= 4; i++){
		c[i] = a[i];
		a[i] = b[i];
		b[i] = c[i];
	}
	for (int i = 0; i <= 4; i++){
		printf("%d", a[i]);
	}
	printf("\n");
	for (int i = 0; i <= 4; i++){
		printf("%d", b[i]);
	}
	return 0;
}