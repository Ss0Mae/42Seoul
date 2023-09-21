/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/25 11:46:33 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/26 21:44:12 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_printable(char *str)
{
	if (*str >= 32 && *str <= 126)
		return (0);
	else
		return (1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned char	c;
	char			*hexa;
	int				i;

	hexa = "0123456789abcdef";
	i = 0;
	while (str[i] != '\0')
	{
		c = str[i];
		if (check_printable(&str[i]) == 0)
		{
			write(1, &c, 1);
		}
		else
		{
			write(1, "\\", 1);
			write(1, &hexa[(unsigned char)str[i] / 16], 1);
			write(1, &hexa[(unsigned char)str[i] % 16], 1);
		}
		i++;
	}
}
