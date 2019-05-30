/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:44:41 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/30 07:45:23 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	char			*s;
	long int		i;
	long int		t;
	char			sign;

	t = n;
	i = 0;
	if (n < 0)
	{
		t *= -1;
		n *= -1;
		sign = '-';
		i++;
	}
	while (t > 9)
	{
		 t = t / 10;
		 i++;
	}
	i++;
	if(!(s = (char*)malloc(sizeof(*s) *(i + 1))))
			return (NULL);
	s[i] = '\0';
	i--;
	while (i >= 0)
	{
		s[i] = (n % 10) + '0';
		n = n / 10;
		i--;
	}
	if (sign == '-')
		s[0] = '-';
	return (s);
}
