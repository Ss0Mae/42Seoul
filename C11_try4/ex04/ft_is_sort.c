/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 13:49:11 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/08 21:22:37 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	flag_asc;
	int	flag_des;

	flag_asc = 0;
	flag_des = 0;
	i = 0;
	if (length == 1)
		return (1);
	while (i < length - 1)
	{
		if (f(tab[i], tab[i + 1]) < 0)
			flag_asc = 1;
		if (f(tab[i], tab[i + 1]) > 0)
			flag_des = 1;
		i++;
	}
	if (flag_asc + flag_des == 2)
		return (0);
	else
		return (1);
}
