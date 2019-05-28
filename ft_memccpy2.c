/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy2.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/22 10:03:39 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/22 12:28:54 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy2(void *dst, const void *src, int c, size_t n)
{
	unsigned int i;
	char *pdst;
	char *psrc;

	pdst = (char *)dst;
	psrc = (char *)src;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		i++;
		if (psrc[i] == (unsigned char)c)
		{
			pdst[i] = psrc[i];
			return (&pdst[i + 1]);
		}
	}
	return (NULL);
}

