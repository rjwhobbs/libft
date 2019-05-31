/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/31 08:31:11 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/31 08:42:58 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1 || !s2)
		return ((int)NULL);
	while ((s1[i] && s2[i]) && (s1[i] == s2[i]) && i < n)
		i++;
	if ((!s1[i] && !s2[i]) || i == n)
		return (1);
	else
		return (0);
}
