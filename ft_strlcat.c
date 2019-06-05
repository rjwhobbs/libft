/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:35:16 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/05 11:43:11 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	int space;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	space = dstsize - dstlen - 1;
	if (space < 0)
		space = 0;
	if (dstlen <= dstsize)
	{
		ft_memcpy(dst + dstlen, src, (size_t)space);
		dst[dstlen + srclen] = '\0';
		return (dstlen + srclen);
	}
	else
		return (dstsize + srclen);
}
