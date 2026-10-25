#include "libft.h"

static	void	special_cases(int n, char *buffer)
{
	if (n == 0)
		ft_strlcpy(buffer, "0", 12);
	else if (n == -2147483648)
		ft_strlcpy(buffer, "-2147483648", 12);
}

static	int	find_biggest_power(int n)
{
	long	biggest_power;
	long	num;

	num = (long)n;
	biggest_power = 1;
	while ((biggest_power * 10) <= num)
		biggest_power = biggest_power * 10;
	return ((int)biggest_power);
}

static void	print_buffer(char *buffer, int fd)
{
	size_t	buffer_len;

	buffer_len = ft_strlen(buffer);
	write(fd, buffer, buffer_len);
}

void	ft_putnbr_fd(int n, int fd)
{
	char	buffer[12];
	size_t	ndx;
	int		biggest_power;

	if ((n == 0) || (n == -2147483648))
		special_cases(n, buffer);
	else
	{
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
	}
	print_buffer(buffer, fd);
}
