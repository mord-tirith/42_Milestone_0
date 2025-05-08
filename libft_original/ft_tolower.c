
#include "libft.h"

int	ft_tolower(int c)
{
	if (!ft_isalpha(c) || c > 'Z')
		return (c);
	return (c + 32);
}
