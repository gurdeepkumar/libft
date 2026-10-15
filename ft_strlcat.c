/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gukumar <gukumar@student.42lisboa.com>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/02 20:37:51 by gukumar           #+#    #+#             */
/*   Updated: 2026/10/02 21:30:56 by gukumar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dst_buffer_size)
{
	size_t	src_len;
	size_t	dst_len;
	size_t	ndx;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dst_len = 0;
	while ((dst_len < dst_buffer_size) && (dst[dst_len]))
		dst_len++;
	if (dst_len == dst_buffer_size)
		return (dst_buffer_size + src_len);
	ndx = 0;
	while (((ndx + dst_len + 1) < dst_buffer_size) && (src[ndx]))
	{
		dst[dst_len + ndx] = src[ndx];
		ndx++;
	}
	dst[dst_len + ndx] = '\0';
	return (src_len + dst_len);
}
