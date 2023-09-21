/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 19:51:11 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/01 17:58:11 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	absolute(char a, char b)
{
	int	res;

	res = a - b;
	if (res >= 0)
		return (res);
	else
		return (res * (-1));
}

int	possible(int col, char *board)
{
	int	i;
	int	res;

	i = 0;
	while (i < col)
	{
		res = absolute(board[i], board[col]);
		if (board[i] == board[col] || (col - i) == res)
			return (0);
		i++;
	}
	return (1);
}

void	ft_ten_queens_puzzle_recursive(char *board, int col, int *tot)
{
	int	i;

	i = 0;
	if (col == 10)
	{
		(*tot)++;
		write(1, board, 10);
		write(1, "\n", 1);
		return ;
	}
	while (i < 10)
	{
		board[col] = '0' + i;
		if (possible(col, board))
			ft_ten_queens_puzzle_recursive(board, col + 1, tot);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	char	board[10];
	int		tot;
	int		i;

	i = 0;
	tot = 0;
	while (i < 10)
		board[i++] = '\0';
	ft_ten_queens_puzzle_recursive(board, 0, &tot);
	return (tot);
}
