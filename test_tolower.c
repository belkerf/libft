#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("testing ft_tolower function\n");
	printf("\texpected:\"a\"->%c \"A\"->%c\n", tolower('a'), tolower('A'));
	printf("\tgot     :\"a\"->%c \"A\"->%c\n", ft_tolower('a'), ft_tolower('A'));
	return (0);
}
