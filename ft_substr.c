#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub_ptr;
	size_t	ndx;
	size_t	start_sub_str;
	size_t	str_len;

	if (s == NULL)
		return (NULL);
	str_len = ft_strlen(s);
	start_sub_str = (size_t)start;
	if (str_len <= start_sub_str)
		len = 0;
	else if (len > (str_len - start_sub_str))
		len = str_len - start_sub_str;
	sub_ptr = (char *)malloc((len + 1) * sizeof(char));
	if (sub_ptr == NULL)
		return (NULL);
	ndx = 0;
	while (ndx < len)
	{
		sub_ptr[ndx] = s[start_sub_str + ndx];
		ndx++;
	}
	sub_ptr[ndx] = '\0';
	return (sub_ptr);
}
