/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/22 14:36:12 by kangwoki          #+#    #+#             */
/*   Updated: 2023/07/23 18:19:25 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	write_first_row(int max_column)
{
	int		column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0)
			ft_putchar('/');
		else if (column == max_column - 1)
			ft_putchar('\\');
		else
			ft_putchar('*');
		column++;
	}
}

void	write_last_row(int max_column)
{
	int		column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0)
			ft_putchar('\\');
		else if (column == max_column - 1)
			ft_putchar('/');
		else
			ft_putchar('*');
		column++;
	}
}

void	write_other_row(int max_column)
{
	int		column;

	column = 0;
	while (column < max_column)
	{
		if (column == 0)
			ft_putchar('*');
		else if (column == max_column - 1)
			ft_putchar('*');
		else
			ft_putchar(' ');
		column++;
	}
}

void	rush(int max_column, int max_row)
{
	int		row;
	int		column;

	if (max_column < 0 || max_row < 0)
		return ;
	row = 0;
	column = 0;
	while (row < max_row)
	{
		if (row == 0)
			write_first_row(max_column);
		else if (row == max_row - 1)
			write_last_row(max_column);
		else
			write_other_row(max_column);
		ft_putchar('\n');
		row++;
	}
}
