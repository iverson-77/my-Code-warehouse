#include<stdio.h>
int main()
{
	int a, b, c;
	printf("��������������\n");
	scanf("%d %d", &a, &b);
	while (1){
		c = a%b;
		if (c == 0){
			break;
		}
		a = b;
		b = c;

	}
	printf("�������������Լ��Ϊ��%d\n", b);
}