/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 15:50:13 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/02 14:52:46 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	trans_to_hex(int idx)
{
	char	*hex;

	hex = "0123456789abcdef";
	return (hex[idx]);
}

void	show_address(unsigned long long add)
{
	char	addr[16];
	int		i;

	i = 0;
	while (i < 16)
	{
		addr[i++] = trans_to_hex(add % 16);
		add /= 16;
	}
	while (i > 0)
		write(1, &addr[--i], 1);
	write(1, ": ", 2);
}

void	show_ascii(unsigned char *str, int len)
{
	int		i;
	char	arr[32];

	i = -1;
	while (i < 32)
		arr[++i] = ' ';
	i = 0;
	while (i < 16 && i < len)
	{
		arr[2 * i] = trans_to_hex(str[i] / 16);
		arr[2 * i + 1] = trans_to_hex(str[i] % 16);
		i++;
	}
	i = 0;
	while (i < 32)
	{
		write(1, &arr[i++], 1);
		if (i % 4 == 0)
			write(1, " ", 1);
	}
}

void	show_words(unsigned char *str, int len)
{
	int		i;
	char	arr[16];

	i = 0;
	while (i < 16)
		arr[i++] = ' ';
	i = 0;
	while (i < 16 && i < len)
	{
		if (str[i] >= 32 && str[i] <= 126)
			arr[i] = str[i];
		else
			arr[i] = '.';
		i++;
	}
	if (len >= 16)
		write(1, arr, 16);
	else
		write(1, arr, len);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	char			*str;

	str = (char *)addr;
	i = 0;
	while (i < size)
	{
		show_address((unsigned long long)&str[i]);
		show_ascii((unsigned char *)&str[i], size - i);
		show_words((unsigned char *)&str[i], size - i);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}
