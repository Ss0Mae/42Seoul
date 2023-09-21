/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 18:39:25 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/09 18:43:45 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_list.h"
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int		tot;
	t_list	*p;

	tot = 0;
	p = begin_list;
	while (p != NULL)
	{
		tot++;
		p = p ->next;
	}
	return (tot);
}
