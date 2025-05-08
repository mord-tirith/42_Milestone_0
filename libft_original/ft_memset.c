
#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	unsigned char	setmem;
	unsigned char	*ret;
	size_t			i;

	ret = (unsigned char *)str;
	i = 0;
	setmem = c;
	while (i < n)
		ret[i++] = setmem;
	return (ret);
}
