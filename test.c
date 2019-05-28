/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:07:42 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/27 17:29:22 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int a; 
//	int i;
	char *s1;
	ft_putendl(av[1]);
//	i = ft_atoi(av[1]);
	s1 = ft_memalloc(0);
	ft_putendl(s1);

	a = ac;

	return (0);
}

