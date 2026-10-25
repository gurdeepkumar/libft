#include "libft.h"

void	*ft_memset(void *ptr, int set_value, size_t n)
{
	unsigned char	*p;

	p = (unsigned char *)ptr;
	while (n--)
		*p++ = (unsigned char)set_value;
	return (ptr);
}
