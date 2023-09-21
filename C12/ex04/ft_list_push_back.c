/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 19:22:15 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/09 21:27:57 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*new;
	t_list	*p;

	new = (t_list *)malloc(sizeof(t_list));
	if (new == NULL)
		return ;
	new -> data = data;
	new -> next = NULL;
	if (*begin_list == NULL)
	{
		*begin_list = new;
		return ;
	}
	p = *begin_list;
	while (p -> next != NULL)
		p = p -> next;
	p -> next = new;
}
