/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 18:00:02 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/27 18:00:37 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	is_positive(int nb)
{
	char	a;

	a = (nb % 10) + '0';
	if (nb / 10 != 0)
		is_positive(nb / 10);
	write(1, &a, 1);
}

void	is_negative(int nb)
{
	char	a;

	a = (-1) * (nb % 10) + '0';
	if (nb / 10 != 0)
		is_negative(nb / 10);
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
		is_positive(nb);
	else
	{
		write(1, "-", 1);
		is_negative(nb);
	}
}
