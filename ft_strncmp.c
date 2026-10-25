#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	ndx;

	ndx = 0;
	while ((ndx < n) && ((s1[ndx]) || (s2[ndx])))
	{
		if (((unsigned char)s1[ndx]) != ((unsigned char)s2[ndx]))
			return (((unsigned char)s1[ndx]) - ((unsigned char)s2[ndx]));
		ndx++;
	}
	return (0);
}
