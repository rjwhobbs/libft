/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 15:19:39 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/28 15:45:42 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int i;
	char *ns;

	i = ft_strlen(s1) + ft_strlen(s2);
	ns = (char*)malloc(sizeof(*ns) * (i - 1));
	ns[i - 1] = '\0';
	return (ns);
}


