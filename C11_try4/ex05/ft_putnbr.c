/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/07 11:44:55 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/08 21:31:06 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	if_positive(int nb)
{
	char	a;

	a = (nb % 10) + '0';
	if (nb / 10 != 0)
	{
		if_positive(nb / 10);
	}
	write(1, &a, 1);
}

void	if_negative(int nb)
{
	char	a;

	a = (-1) * (nb % 10) + '0';
	if (nb / 10 != 0)
	{
		if_negative(nb / 10);
	}
	write(1, &a, 1);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0)
	{
		if_positive(nb);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		if_negative(nb);
	}
}
