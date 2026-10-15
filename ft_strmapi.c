/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukumar <gukumar@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:34:37 by gukumar           #+#    #+#             */
/*   Updated: 2026/10/09 14:51:12 by gukumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*modified_string;
	unsigned int	ndx;

	if ((s == NULL) || (f == NULL))
		return (NULL);
	modified_string = malloc(ft_strlen(s) + 1);
	if (modified_string == NULL)
		return (NULL);
	ndx = 0;
	while (s[ndx])
	{
		modified_string[ndx] = f(ndx, s[ndx]);
		ndx++;
	}
	modified_string[ndx] = '\0';
	return (modified_string);
}
