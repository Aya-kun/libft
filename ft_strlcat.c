#include "libft.h"


size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t len;

	len = ft_strlen(dest);
	if (size <= len)
		return (size + ft_strlen(src));
	size -= (len + 1);
	while (*src && size-- > 0)
		dest[len++] = *(src++);
	dest[len] = 0;
	return (len + ft_strlen(src));
} 
