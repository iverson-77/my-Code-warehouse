#include<stdio.h>
int DigitSum1(int n)
{
	int m=0;
	int sum = 0;
	while (n != 0){
		m = n % 10;
		sum += m;
		n = n / 10;
	}
	return sum;
}
int DigitSum2(int n)
{
	if (n /10==0){
		return n;
	}
	else{
		return DigitSum2(n / 10) + n % 10;
	}
}
int main()
{
	printf("%d\n", DigitSum1(1729));
	printf("%d\n", DigitSum2(1729));
	return 0;
}