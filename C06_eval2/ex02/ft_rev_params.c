/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/30 14:34:55 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/31 14:21:25 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

int	main(int ac, char **av)
{
	int	i;
	int	len;

	len = 0;
	i = ac - 1;
	if (ac > 1)
	{
		while (i >= 1)
		{
			len = ft_len(av[i]);
			write(1, av[i], len);
			write(1, "\n", 1);
			i--;
		}
	}
	return (0);
}
