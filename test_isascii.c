#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	
	printf("expected : %d %d %d\n", isascii('1'), isascii(' '), isascii('q' + 123456));
	printf("got      : %d %d %d\n", ft_isascii('1'), ft_isascii('a'), ft_isascii('q' + 123456));
	return(0);
}
