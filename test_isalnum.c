#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{

	printf("expected : %d %d %d\n", isalnum('1'), isalnum('a'), isalnum(256));
	printf("got      : %d %d %d\n", ft_isalnum('1'), ft_isalnum('a'), ft_isalnum(256));
	return (0);
}
