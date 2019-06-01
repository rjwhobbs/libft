/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 06:46:17 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/01 16:18:29 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*fs;

	i = 0;
	if (!(fs = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))) ||
			!s || !f)
		return (NULL);
	while (s[i])
	{
		fs[i] = f(s[i]);
		i++;
	}
	fs[i] = '\0';
	return (fs);
}
