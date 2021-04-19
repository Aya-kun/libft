#include "libft.h"

char	*ft_strdup(char *src)
{
	int		i;
	int		len;
	char	*ptr;

	i = 0;
	len = ft_strlen(src);
	ptr = (char *)malloc(sizeof(char) * (len + 1));
	if (!ptr)
		return (NULL);
	while (i < len)
	{
		ptr[i] = src[i];
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
