#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "ft_memcpy.c"
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		const char src[] = "hey jawad";
		char dest[20];
		char dest1[20];
		printf("exp: %s\n", (char *)memcpy((void *)dest, (const void *)src, 5));
		printf("got: %s\n", (char *)ft_memcpy((void *)dest1, (const void *)src, 5));
	}
	printf("%s \n", argv[0]);
}
