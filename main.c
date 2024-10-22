#include "libft.h"
#include <string.h>
#include <stdio.h>
int main()
{
	char ar[] = "1234567";
	char arr[] = "1234567";

	printf("%s\n",(char *)ft_memmove(((void *)(arr +2)), ((void *)arr), 5));
	printf("%s\n",(char *)(memmove(((void *)(ar + 2)), ((void *)ar), 5)));
	return (0);
}
