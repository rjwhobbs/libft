/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 09:15:29 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/31 11:04:31 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*pdst;
	char	*psrc;
	
	i = 0;
	if (!dst || !src)
		dst = (void*)src;
	if ((!dst || !src) && n)
		return (NULL);
	pdst = (char *)dst;
	psrc = (char *)src;
	while (i < n )
	{
		pdst[i] = psrc[i];
		i++;
	}
	return (dst);
}


