#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	printf("testing ft_strlen function\n");
	printf("\texpected:\"\"->%lu \"abcde\"->%lu\n", strlen(""), strlen("abcde"));
	printf("\tgot     :\"\"->%lu \"abcde\"->%lu\n", ft_strlen(""), ft_strlen("abcde"));
	return (0);
}
