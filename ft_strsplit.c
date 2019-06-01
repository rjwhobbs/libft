/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 07:43:54 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/01 16:35:11 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	wc(char const *s, char c)
{
	int wc;
	int i;

	i = 0;
	wc = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && (s[i]))
			wc++;
		while (s[i] != c && (s[i]))
			i++;
	}
	return (wc);
}

static size_t	cc(char const *s, int i, char c)
{
	int j;

	j = 0;
	while (s[i + j] != c && (s[i + j]))
		j++;
	return (j);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**split;
	int		i;
	int		words;
	int		charc;
	int		j;

	words = 0;
	charc = 0;
	words = wc(s, c);
	i = 0;
	j = 0;
	if (!(split = (char**)malloc(sizeof(char*) * words)))
		return (NULL);
	while (j < words)
	{
		while (s[i] == c)
			i++;
		charc = cc(s, i, c);
		split[j] = ft_strsub(s, i, charc);
		i += charc;
		j++;
	}
	return (split);
}
