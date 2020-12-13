#include<stdio.h>
int main()
{
	double sum = 0;
	int a = 1;
	for (int i = 1; i <= 100; i++){
		sum = sum + a*(1.0 / i);
		a = -a;
	}
	printf("½á¹ûÎª£º%f\n", sum);
}