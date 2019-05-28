/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 06:50:36 by rhobbs            #+#    #+#             */
/*   Updated: 2019/05/28 06:50:45 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"
#include <string.h>

void	ft_putstr(char const *s)
{	
	if (s == NULL)
		write(1, "(null)", 6);
	else
		while(*s)
			write(1, s++, 1);
}

