
#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;
	char	*b;

	b = (char *)s;
	i = 0;
	while (b[i])
		i++;
	return (i);
}
