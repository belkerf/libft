#define size_t long unsigned int
#include <stdio.h>
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char *b = (char *)dest;
	char *s = (char *)src;
	size_t	i;

	i = 0;
	while (i < n)
	{
		b[i] = s[i];
		i++;
	}
	b[i] = 0;
	return (dest);
}
