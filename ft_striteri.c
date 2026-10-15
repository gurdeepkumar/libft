/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukumar <gukumar@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/09 14:44:34 by gukumar           #+#    #+#             */
/*   Updated: 2026/10/09 14:56:01 by gukumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
