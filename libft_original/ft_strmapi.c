
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	int		i;
	size_t	size;
	char	*buff;

	i = 0;
	if (!s || !f)
		return (NULL);
	size = ft_strlen(s);
	buff = ft_calloc(size + 1, sizeof(char));
	if (!buff)
		return (NULL);
	while (s[i])
	{
		buff[i] = f(i, s[i]);
		i++;
	}
	buff[i] = 0;
	return (buff);
}
