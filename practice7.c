#include<stdio.h>

int power1(int n,int k){
	int i = k;
	int sum = 1;
	while (i > 0){
		sum= sum*n;
		i--;
	}
	return sum;
}

int power2(int n, int k)
{
	if (k == 1){
		return n;
	}
	return n*power2(n, k-1);
}
int main()
{
	
	printf("%d\n", power1(3, 4));
	printf("%d\n", power2(3, 2));
    return 0;
}