#include<stdio.h>
int main()
{
	int num = 0;
	int ret = 1;
	for (int i = 1; i <= 3; i++){

		ret = ret*i;
		num += ret;


	}
	printf("%d\n", num);
	return 0;
}