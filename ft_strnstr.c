#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	t;
	char	*result;

	result = (char *)big;
	j = 0;
	if (ft_strlen(little) == 0)
		return (result);
	while (result[j] != '\0' && len >= ft_strlen(little))
	{
		i = 0;
		t = j;
		while (result[t] == little[i] && result[t] != '\0' && little[i] != '\0')
		{
			i++;
			t = j + i;
		}
		if (little[i] == '\0')
			return (&result[j]);
		j++;
		len--;
	}
	return (NULL);
}
