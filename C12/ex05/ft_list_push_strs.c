/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:49:04 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/09 20:39:36 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return (0);
	new->data = data;
	new ->next = NULL;
	return (new);
}

t_list	*ft_list_push_strs(int size, char **strs)
{
	t_list	*p;
	t_list	*begin;
	int		i;

	begin = NULL;
	i = 0;
	while (i < size)
	{
		p = ft_create_elem(strs[i]);
		if (p == NULL)
			return (NULL);
		p -> next = begin;
		begin = p;
	}
	return (begin);
}
