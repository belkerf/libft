#include "libft.h"
#include <stdio.h>
#include <ctype.h>
int main()
{
	printf("expected : %d %d %d\n", isalpha('1'), isalpha('a'), isalpha(123456));
	printf("got      : %d %d %d\n", ft_isalpha('1'), ft_isalpha('a'), ft_isalpha(123456));
	return (0);
}
