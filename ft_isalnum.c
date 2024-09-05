int	ft_isalnum(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (8);
	else if (c >= '0' && c <= '9')
		return (8);
	else
		return (0);
}
