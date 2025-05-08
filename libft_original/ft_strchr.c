
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	char			*s;
	unsigned char	search;

	search = c;
	s = (char *)str;
	while (*s)
	{
		if (*s == search)
			return (s);
		s++;
	}
	if (search == 0)
		return (s);
	return (NULL);
}
