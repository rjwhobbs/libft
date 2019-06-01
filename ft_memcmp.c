/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 10:56:25 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/01 15:31:34 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*str2;
	unsigned char	*str1;

	i = 0;
	str2 = (unsigned char*)s1;
	str1 = (unsigned char*)s2;
	while (i < (n - 1) && str1[i] == str2[i])
		i++;
	return (str2[i] - str1[i]);
}
