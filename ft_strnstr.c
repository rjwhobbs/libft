/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 06:54:50 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/01 16:26:36 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int			check;
	size_t		nlen;
	int			i;

	i = 0;
	nlen = ft_strlen(needle);
	if (!*needle)
		return ((char *)haystack);
	while ((haystack[i]) && nlen <= (len - i))
	{
		check = 1;
		check = ft_strncmp(&haystack[i], needle, nlen);
		if (check == 0)
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}
