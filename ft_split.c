#include "libft.h"

static	size_t	count_words(char const *s, char c)
{
	size_t	ndx;
	size_t	count;

	ndx = 0;
	count = 0;
	while (s[ndx])
	{
		if ((s[ndx] != c) && ((ndx == 0) || (s[ndx - 1] == c)))
			count++;
		ndx++;
	}
	return (count);
}

static	size_t	word_len(char const *s, char c)
{
	size_t	len;

	len = 0;
	while ((s[len] != c) && (s[len]))
		len++;
	return (len);
}

static void	free_all(char **arr, size_t ndx)
{
	while (ndx--)
		free(arr[ndx]);
	free(arr);
}

static int	assign_words(char const *s, char c, char **arr, size_t words_count)
{
	size_t	ndx;
	size_t	len;

	ndx = 0;
	while (ndx < words_count)
	{
		while (*s == c)
			s++;
		len = word_len(s, c);
		arr[ndx] = ft_substr(s, 0, len);
		if (arr[ndx] == NULL)
		{
			free_all(arr, ndx);
			return (1);
		}
		ndx++;
		s = s + len;
	}
	arr[ndx] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**array_ptr;
	size_t	words_count;

	if (s == NULL)
		return (NULL);
	words_count = count_words(s, c);
	array_ptr = (char **)malloc((words_count + 1) * sizeof(char *));
	if (array_ptr == NULL)
		return (NULL);
	if (assign_words(s, c, array_ptr, words_count) == 1)
		return (NULL);
	return (array_ptr);
}
