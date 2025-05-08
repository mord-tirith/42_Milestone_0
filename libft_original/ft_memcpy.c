
#include <stddef.h>

void	*ft_memcpy(void *dest_str, const void *src_str, size_t n)
{
	size_t	i;

	if (!dest_str && !src_str)
		return (dest_str);
	i = 0;
	if (n > 0)
	{
		while (n > i)
		{
			((unsigned char *)dest_str)[i] = ((unsigned char *)src_str)[i];
			i++;
		}
	}
	return (dest_str);
}
