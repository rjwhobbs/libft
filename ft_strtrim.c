/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nreddy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 09:45:11 by nreddy            #+#    #+#             */
/*   Updated: 2019/06/18 14:58:54 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t len;
	size_t start;
	size_t end;

	if (s == NULL)
		return (NULL);
	len = 0;
	start = 0;
	end = (ft_strlen(s) - 1);
	if (end > ft_strlen(s))
		return (ft_strnew(0));
	while ((s[start] >= '\t' && s[start] <= '\r') || s[start] == ' ')
		start++;
	if ((start - 1) == end)
		return (ft_strnew(0));
	while ((s[end] >= '\t' && s[end] <= '\r') || s[end] == ' ')
		end--;
	len = (end - start + 1);
	return ((ft_strsub(s, start, len)));
}
