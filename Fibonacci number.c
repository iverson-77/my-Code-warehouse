#include<stdio.h>

int Fibonacci_number1(int n)
{
	if (n <= 2){
		return 1;
	}
		return Fibonacci_number1(n - 1) + Fibonacci_number1(n - 2);
	
}
int main()
{
	printf("%d\n", Fibonacci_number1(10));
	return 0;
}