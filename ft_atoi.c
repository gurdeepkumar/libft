#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t	ndx;
	int		sign;
	int		num;

	ndx = 0;
	sign = 1;
	num = 0;
	while ((str[ndx] >= 9 && str[ndx] <= 13) || (str[ndx] == 32))
		ndx++;
	if ((str[ndx] == '-') || (str[ndx] == '+'))
	{
		if (str[ndx] == '-')
			sign = -1;
		ndx++;
	}
	while ((str[ndx] >= '0') && (str[ndx] <= '9'))
	{
		num = (num * 10) - (str[ndx] - '0');
		ndx++;
	}
	if (sign == -1)
		return (num);
	else
		return (-num);
}
