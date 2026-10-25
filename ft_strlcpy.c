#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t n)
{
	size_t	src_len;
	size_t	ndx;

	src_len = 0;
	while (src[src_len])
		src_len++;
	ndx = 0;
	while (((ndx + 1) < n) && (src[ndx]))
	{
		dst[ndx] = src[ndx];
		ndx++;
	}
	if ((ndx + 1) <= n)
		dst[ndx] = '\0';
	return (src_len);
}
