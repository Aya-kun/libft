#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*ptr;

	if (!n)
		return ;
	ptr = s;
	i = 0;
	while (i < n)
	{
		ptr[i++] = 0;
	}
}
