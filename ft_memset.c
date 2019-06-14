/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 14:32:10 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/14 09:49:22 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t	i;
	char	*pb;

	i = 0;
	if (!b)
		return (NULL);
	pb = (char *)b;
	while (i < len)
		pb[i++] = (unsigned char)c;
	return (b);
}
