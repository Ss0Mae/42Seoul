/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42seoul.k>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:18:57 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/22 18:58:53 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb1(char *a, char *b);
void	ft_print_comb2(void);
void	comma(char *a, char *b);

void	comma(char *a, char *b)
{
	write(1, a, 2);
	write(1, " ", 1);
	write(1, b, 2);
	if ((a[0] != '9' || a[1] != '8') || (b[0] != '9' || b[1] != '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_print_comb1(char *a, char *b)
{
	while (b[0] <= '9')
	{
		while (b[1] <= '9')
		{
			comma(a, b);
			b[1]++;
		}
		b[0]++;
		b[1] = '0';
	}
	a[1]++;
}

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	a[0] = '0';
	a[1] = '0';
	while (a[0] <= '9')
	{
		while (a[1] <= '9')
		{
			b[0] = a[0];
			b[1] = a[1] + 1;
			ft_print_comb1(a, b);
		}
		a[0]++;
		a[1] = '0';
	}
}
