#include<stdio.h>
#include<string.h> 
void Reverse_order(char *a)
{
	char *left = a;
	char *right = a + strlen(a) - 1;
	while (left < right){
		char tmp = *left;
		*left = *right;
		*right = tmp;
		left++;
		right--;
	}

	printf("%s", a);
}
int main()
{
	char a[] = "hello world";
	Reverse_order(a);

	return 0;
}