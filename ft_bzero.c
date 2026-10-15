/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukumar <gukumar@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 14:03:16 by gukumar           #+#    #+#             */
/*   Updated: 2026/10/11 22:10:12 by gukumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *ptr, size_t n)
{
	unsigned char	value;
	unsigned char	*p;
	size_t			ndx;

	value = '\0';
	p = (unsigned char *)ptr;
	ndx = 0;
	while (ndx < n)
	{
		p[ndx] = value;
		ndx++;
	}
}
