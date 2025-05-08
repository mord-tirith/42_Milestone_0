
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	needle;
	unsigned char	*str;
	size_t			i;

	i = 0;
	needle = c;
	str = (unsigned char *)s;
	while (i < n)
	{
		if (str[i] == needle)
			return (&str[i]);
		i++;
	}
	return (NULL);
}
