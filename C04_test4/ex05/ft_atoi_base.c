/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/27 18:21:02 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/30 18:12:34 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	base_len(char *base)
{
	int	len;

	len = 0;
	while (base[len])
	{
		if (base[len] == '-' || base[len] == '+')
			return (0);
		if (base[len] == ' ' || (base[len] >= 9 && base[len] <= 13))
			return (0);
		len++;
	}
	return (len);
}

int	check_twice(int len, char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < len - 1)
	{
		j = i + 1;
		while (j < len)
		{
			if (base[i] == base[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

int	getindex(char str, int len, char *base)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str == base[i])
			return (i);
		i++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sign;
	int	result;
	int	len;

	len = base_len(base);
	result = 0;
	sign = 1;
	if (len < 2)
		return (0);
	if (check_twice(len, base))
		return (0);
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
		if (*(str++) == '-')
			sign *= -1;
	while (*str)
	{
		i = getindex(*(str++), len, base);
		if (i == -1)
			break ;
		result = len * result + i;
	}
	return (sign * result);
}
