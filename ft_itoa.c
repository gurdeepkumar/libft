#include "libft.h"

static	char	*special_cases(int n, char *buffer)
{
	if (n == 0)
		ft_strlcpy(buffer, "0", 12);
	else if (n == -2147483648)
		ft_strlcpy(buffer, "-2147483648", 12);
	return (buffer);
}

static	int	find_biggest_power(int n)
{
	long	biggest_power;

	biggest_power = 1;
	while ((biggest_power * 10) <= n)
		biggest_power = biggest_power * 10;
	return ((int)biggest_power);
}

char	*ft_itoa(int n)
{
	char	*buffer;
	size_t	ndx;
	int		biggest_power;

	buffer = ft_calloc(12, 1);
	if (buffer == NULL)
		return (NULL);
	if ((n == 0) || (n == -2147483648))
		return (special_cases(n, buffer));
	ndx = 0;
	if (n < 0)
	{
		buffer[ndx++] = '-';
		n = -n;
	}
	biggest_power = find_biggest_power(n);
	while (biggest_power >= 1)
	{
		buffer[ndx++] = (char)((n / biggest_power) + '0');
		n = n % biggest_power;
		biggest_power = biggest_power / 10;
	}
	buffer[ndx] = '\0';
	return (buffer);
}
