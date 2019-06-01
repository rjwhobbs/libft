/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:19:39 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/01 15:53:51 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*ns;

	j = 0;
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(ns = (char*)malloc(sizeof(*ns) * (i - 1))) ||
			!*s1 || !*s2)
		return (NULL);
	while (s1[j])
	{
		ns[j] = s1[j];
		j++;
	}
	i = 0;
	while (s2[i])
	{
		ns[j] = s2[i];
		i++;
		j++;
	}
	ns[j] = '\0';
	return (ns);
}
