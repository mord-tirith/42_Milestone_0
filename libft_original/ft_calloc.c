
#include "libft.h"
#include <stdlib.h>
#include <unistd.h>
#include <stdint.h>

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*arr;
	size_t	num_bytes;

	if (nitems == 0 || size == 0)
		return (malloc(0));
	if (nitems > SIZE_MAX / size)
		return (NULL);
	num_bytes = nitems * size;
	arr = malloc(num_bytes);
	if (!arr)
		return (NULL);
	ft_bzero(arr, num_bytes);
	return (arr);
}
