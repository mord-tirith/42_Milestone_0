
#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	size_t	size;
	char	*dup;

	size = ft_strlen(s1) + 1;
	dup = ft_calloc(size, sizeof(char));
	if (!dup)
		return (NULL);
	ft_memcpy(dup, s1, size);
	return (dup);
}
