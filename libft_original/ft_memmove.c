
#include "libft.h"

static void	ft_movebigger(char *d, const char *s, size_t n)
{
	while (n)
	{
		*d = *s;
		s++;
		d++;
		n--;
	}
}

static void	ft_movesmall(char *d, const char *s, size_t n)
{
	while (n)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void *dest_str, const void *src_str, size_t n)
{
	char		*d;
	const char	*s;

	s = src_str;
	d = dest_str;
	if (s == d || !n)
		return (d);
	if (s > d)
		ft_movebigger(d, s, n);
	else
		ft_movesmall(d, s, n);
	return (d);
}
