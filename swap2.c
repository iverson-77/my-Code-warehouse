#include<stdio.h>

void swap(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;

}

int main()
{
	int x = 3, y = 5;
	swap(&x, &y);
	printf("%d %d", x, y);
}