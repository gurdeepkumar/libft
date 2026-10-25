#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*ptr;
	size_t	len;

	len = ft_strlen(s1);
	ptr = (char *)malloc(len + 1);
	if (ptr == NULL)
		return (NULL);
	while (*s1)
		*ptr++ = *s1++;
	*ptr = '\0';
	return (ptr - len);
}
