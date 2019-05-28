/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 10:07:42 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/28 16:13:22 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <unistd.h>
#include <stdio.h>

int	main(int ac, char **av)
{
	int a; 
	int i;

	a = ac;
	i = ft_atoi(av[3]);

	ft_putnbr(ft_memcmp(av[1], av[2], i));
	ft_putchar('\n');
	ft_putnbr(memcmp(av[1], av[2], i));

	return (0);
}

