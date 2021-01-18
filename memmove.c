#include<stdio.h>
#include<string.h>

void *my_memove(void *dst,const void *src,size_t size)
{
	char *ch_dst = (char*)dst;
	const char *ch_src = (const char*)src;
	if (ch_dst >= ch_src && ch_dst <= ch_src + size)
	{
		for (int i = size - 1; i >= 0; --i)
			ch_dst[i] = ch_src[i];
	}
	else
	{
		for (size_t i = 0; i < size; ++i)
			ch_dst[i] = ch_src[i];
	}

	return  dst;
}

int main()
{
	char a[10];
	char b[] = "hello";
	my_memove(a, b, sizeof(b));
	printf("%s\n", b);
}