int	isdigit(char *str)
{
	while (*str)
	{
		if (*str >= '0' && *str <= 'z')
			str++;
		else
			return (0);
	}
	return (1);
}
