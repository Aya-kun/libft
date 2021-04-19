char	*ft_strchr(const char *s, int c)
{
	int	len;
	int	i;

	len = 0;
	while (s[len])
	{
		len++;
	}
	len++;
	i = 0;
	while (i <= len)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	return (0);
}
