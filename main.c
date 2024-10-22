#include "libft.h"
#include <string.h>
#include <stdio.h>
int main()
{
	printf("%s\n",(char *)ft_memmove(((void *)0), ((void *)0), 3));
	printf("%s\n",(char *)(memmove(((void *)0), ((void *)0), 3)));
	return (0);
}
