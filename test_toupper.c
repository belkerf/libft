#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("testing ft_toupper function\n");
	printf("\texpected:\"a\"->%c \"A\"->%c\n", toupper('a'), toupper('A'));
	printf("\tgot     :\"a\"->%c \"A\"->%c\n", ft_toupper('a'), ft_toupper('A'));
	return (0);
}
