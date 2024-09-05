#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "ft_strlen.c"
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("exp: %li\n", strlen(argv[1]));
		printf("got: %li\n", ft_strlen(argv[1]));
	}
}
