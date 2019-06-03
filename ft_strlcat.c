/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 13:35:16 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/03 17:50:15 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t dstlen;
	size_t srclen;
	size_t bufflen;

	dstlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	bufflen = sizeof(dst);
	if (bufflen == dstsize)
	{
		ft_strncat(dst, src, bufflen);
		return (srclen + dstlen);
	}
	else if (dstsize < bufflen && dstlen >= dstsize)
	{
		ft_strncat(dst, src, dstsize);
		return (srclen + dstlen);
	}
	else if (dstsize <= dstlen)
		return (srclen + dstsize);
	else
		return (srclen + dstlen);
}
