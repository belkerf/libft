#include "libft.h"
#include <ctype.h>
#include <stdio.h>

int main()
{
	printf("expected : %d %d\n", isdigit('1'), isdigit('a'));
	printf("got      : %d %d\n", ft_isdigit('1'), ft_isdigit('a'));
}
