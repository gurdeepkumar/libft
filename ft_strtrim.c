#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*ptr;

	if ((s1 == NULL) || (set == NULL))
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while ((s1[start]) && (ft_strchr(set, s1[start])))
		start++;
	while ((end > start) && (ft_strchr(set, s1[end - 1])))
		end--;
	ptr = ft_substr(s1, (unsigned int)start, (end - start));
	return (ptr);
}
