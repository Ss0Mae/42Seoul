/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 13:03:44 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/23 18:19:22 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	first_last(int max_column)
{
	int	column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0 || column == max_column - 1)
			ft_putchar('o');
		else
			ft_putchar('-');
		column++;
	}
}

void	border(int max_column)
{
	int	column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0 || column == max_column - 1)
			ft_putchar('|');
		else
			ft_putchar(' ');
		column++;
	}
}

void	rush(int max_column, int max_row)
{
	int	row;

	if (max_column < 0 || max_row < 0)
		return ;
	row = 0;
	while (row < max_row)
	{
		if (row == 0 || row == max_row - 1)
			first_last(max_column);
		else
			border(max_column);
		ft_putchar('\n');
		row++;
	}
}
