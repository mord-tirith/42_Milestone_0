
#include "libft.h"

int	ft_atoi(const char *str)
{
	unsigned int	result;
	int				i;
	int				sign;

	sign = 1;
	i = 0;
	result = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == ' ')
		i++;
	if (str[i] == '+')
		i++;
	else if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}
	while (ft_isdigit(str[i]) && str[i])
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	return ((int)result * sign);
}
