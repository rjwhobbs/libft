/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 15:15:59 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/22 08:25:22 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t i;
	char *pdst;
	char *psrc;

	i = 0;
	pdst = (char *)dst;
	psrc = (char *)src;
	while (i < n)
	{
		if (psrc[i] != (unsigned char)c)
			pdst[i] = psrc[i];
		else if (psrc[i] == (unsigned char)c)
		{
			pdst[i] = psrc[i];
			return (&dst[i+1]);
		}
		i++;
	}
	return (NULL);
}