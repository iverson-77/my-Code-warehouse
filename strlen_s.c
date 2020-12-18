#include<stdio.h>

int strlen1(char *a)
{
	int count = 0;
	while (*a != '\0'){
		count++;
		a++;
	}
	return count;
}

int strlen2(char *a)
{
	if (*a == '\0'){
		return 0;
	}
	else{
		return 1 + strlen2(a+1);
	}
}
int main()
{
	char a[] = "hello world";
	printf("%d\n",strlen1(a));
	printf("%d\n", strlen2(a));
	return 0;
}