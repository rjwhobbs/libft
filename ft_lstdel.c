/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rhobbs <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 08:47:34 by rhobbs            #+#    #+#             */
/*   Updated: 2019/06/10 09:56:51 by rhobbs           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alsti, void (*del)(void *, size_t))
{
	t_list *temp;

	temp = *alsti;
	while (*alsti)
	{
		del((*alsti)->content, (*alsti)->content_size);
		free(*alsti);
		*alsti = (*alsti)->next;
	}
	temp = NULL;
}
