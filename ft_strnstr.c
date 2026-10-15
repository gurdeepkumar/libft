/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukumar <gukumar@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/03 22:43:41 by gukumar           #+#    #+#             */
/*   Updated: 2026/10/12 22:37:10 by gukumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	ndx;
	size_t	jdx;

	ndx = 0;
	if (needle[ndx] == '\0')
		return ((char *)haystack);
	while ((ndx < len) && (haystack[ndx]))
	{
		jdx = 0;
		while (((ndx + jdx) < len) && (needle[jdx]))
		{
			if (haystack[ndx + jdx] == needle[jdx])
				jdx++;
			else
				break ;
			if (needle[jdx] == '\0')
				return ((char *)&haystack[ndx]);
		}
		ndx++;
	}
	return (NULL);
}
