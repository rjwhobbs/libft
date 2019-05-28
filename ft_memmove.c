/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:26:41 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/27 14:14:57 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t i;
	unsigned char *psrc;
	unsigned char *pdst;

	i = len;
	psrc = (unsigned char *)src;
	pdst = (unsigned char *)dst;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (dst > src)
	{
		while (i > 0)
		{
			i--;
			pdst[i] = psrc[i];
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return ((void *)dst);
}
