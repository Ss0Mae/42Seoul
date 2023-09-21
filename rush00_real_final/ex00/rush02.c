/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:13:35 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/23 18:19:27 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	first(int max_column)
{
	int	column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0 || column == max_column - 1)
			ft_putchar('A');
		else
			ft_putchar('B');
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
			ft_putchar('B');
		else
			ft_putchar(' ');
		column++;
	}
}

void	last(int max_column)
{
	int	column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0 || column == max_column - 1)
			ft_putchar('C');
		else
			ft_putchar('B');
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
		if (row == 0)
			first(max_column);
		else if (row == max_row - 1)
			last(max_column);
		else
			border(max_column);
		ft_putchar('\n');
		row++;
	}
}
