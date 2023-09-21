/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:56:14 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/23 16:28:45 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;
	int	len;

	len = size - 1;
	i = 0;
	while (i <= len)
	{
		tmp = tab[len];
		tab[len] = tab[i];
		tab[i] = tmp;
		i++;
		len--;
	}
}
