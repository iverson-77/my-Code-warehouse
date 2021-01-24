#include<stdio.h>

int missingnumber(int *a,int n)
{
	int i = 0;
	int num=0;
	for (i = 0; i < n; i++){
		num ^= i;
		num ^= a[i];
	}
	num ^= n;
	return num;
}
int main()
{
	int a[9] = { 9, 6, 4, 2, 3, 5, 7, 0, 1 };
	printf("%d\n",missingnumber(a, 9));
	return 0;
}