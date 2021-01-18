#include<stdio.h>
#include<string.h>

void* my_memcpy(void* dst, const void* src, size_t size)
{
	char* ch_dst = (char*)dst;
	const char* ch_src = (const char*)src;

	for (size_t i = 0; i < size; ++i)
	{
		ch_dst[i] = ch_src[i]; 
	}

	return dst;
}

int main()
{
	char a[10];
	char b[] = "hello";
	my_memcpy(a, b, sizeof(b));
	printf("%s\n", b);
}