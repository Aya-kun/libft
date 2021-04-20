#include "libft.h"

static char	*ft_strre(char *s)
{
	int		i;
	int		len;
	char	tmp;

	i = 0;
	len = ft_strlen(s);
	while (i < len / 2)
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
	return (s);
}

static int	ft_ifret(int n)
{
	if (n < 0)
		return (-1);
	return (1);
}

static int	ft_ifrethesec(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

char	*ft_itoa(int n)
{
	char	s[12];
	int		i;
	int		neg;

	ft_memset(s, 0, 12);
	i = 0;
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	else if (n == 0)
		return (ft_strdup("0"));
	neg = ft_ifret(n);
	n = ft_ifrethesec(n);
	while (n > 0)
	{
		s[i] = (n % 10) + '0';
		n /= 10;
		i++;
	}
	if (neg < 0)
		s[i] = '-';
	ft_strre(s);
	return (ft_strdup(s));
}
