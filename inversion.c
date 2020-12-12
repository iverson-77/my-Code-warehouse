#include<stdio.h>
#include<string.h>

int main()
{
	char a[] = { "hello world" };
	int len = strlen(a);
	printf("%s\n", a);
	for (int i = 0; i <= len; i++){
		printf("%c", a[i]);
	}
	printf("\n");
	int left = 0;
	int right = len - 1;
	while (left < right){
		char tmp = a[left];
		a[left] = a[right];
		a[right] = tmp;
		++left;
		--right;
	}
	printf("%s\n", a);

	return 0;
}