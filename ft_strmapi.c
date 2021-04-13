#include <stdlib.h>

char	*ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	unsigned int	i;
	char			*ret;

	if (!s || !f)
		return (0);
	i = 0;
	while (s[i])
		i++;
	ret = (char *)malloc(sizeof(char) * (i + 1));
	if (!ret)
		return (0);
	i = 0;
	while (s[i])
	{
		ret[i] = f(i, s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
