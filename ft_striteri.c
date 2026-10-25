#include "libft.h"

void	ft_striteri(char *s, void (*f) (unsigned int, char *))
{
	unsigned int	ndx;

	if ((s == NULL) || (f == NULL))
		return ;
	ndx = 0;
	while (s[ndx])
	{
		f(ndx, &s[ndx]);
		ndx++;
	}
}
