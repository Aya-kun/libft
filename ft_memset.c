#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	uc;
	char			*str;

	uc = c;
	i = 0;
	str = s;
	while (i < n)
	{
		str[i] = uc;
		i++;
	}
	return (s);
}
