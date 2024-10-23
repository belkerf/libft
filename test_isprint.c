#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int main()
{
	printf("testing ft_isprint function\n");
	printf("\texpected:\'k\'->%d 177->%d\n", isprint('k'), isprint(177));
	printf("\tgot     :\'k\'->%d 177->%d\n", ft_isprint('k'), ft_isprint(177));
	return (0);
}
