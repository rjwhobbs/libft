/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striter.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 16:47:01 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/30 16:51:00 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	rh_putstr(char *s)
{
	if (s == NULL)
		write(1, "(null)", 6);
	else
		while(*s)
			write(1, s++, 1);
}

int	main(int ac, char **av)
{
	int a;
	a = ac;

	ft_striter(av[1], rh_putstr);
	return (0);
}


