/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/20 14:18:04 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/26 11:50:09 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_combi(int depth, int n, int *check, char *arr)
{
	int	i;

	if (depth == n - 1)
	{
		if (*check != 0)
			write(1, ", ", 2);
		write(1, arr, n);
		(*check)++;
	}
	else
	{
		i = 0;
		depth++;
		while (i <= 9)
		{
			if (i + '0' > arr[depth - 1])
			{
				arr[depth] = i + '0';
				ft_combi(depth, n, check, arr);
				arr[depth] = -1;
			}
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	char	arr[10];
	int		i;
	int		check;

	i = 0;
	check = 0;
	while (i <= 10 - n)
	{
		arr[0] = '0' + i;
		ft_combi(0, n, &check, arr);
		i++;
	}
}

int main()
{
	ft_print_combn(6);
}
