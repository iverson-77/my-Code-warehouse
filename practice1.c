#include<stdio.h>
int main()
{
	printf("������������\n");
	int a, b;
	scanf("%d %d", &a, &b);
	int i;
	if (a > b){
		i = b;
	}
	else
		i = a;
	while (a%i != 0 || b%i != 0){
		i--;
	}
	printf("�������������Լ��Ϊ��%d\n", i);
	return 0;
	getchar();
}