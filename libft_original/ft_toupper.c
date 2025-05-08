
#include "libft.h"

int	ft_toupper(int c)
{
	if (!ft_isalpha(c) || c <= 'Z')
		return (c);
	return (c - 32);
}
