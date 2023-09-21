/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/01 12:21:51 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/03 16:19:27 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		base_len(char *base);
int		check_twice(int len, char *base);
int		getindex(char str, int len, char *base);
int		ft_atoi_base(char *str, char *base);
void	rev(char *temp, int i);

char	*convert_base_to(long long res, char *base_to)
{
	char		*temp;
	const int	len_to = base_len(base_to);
	int			i;

	i = 0;
	temp = (char *)malloc(sizeof(char) * 40);
	if (!temp)
		return (0);
	if (res == 0)
		temp[i++] = base_to[0];
	else if (res < 0)
	{
		temp[i++] = '-';
		res *= -1;
	}
	while (res > 0)
	{
		temp[i++] = base_to[res % len_to];
		res /= len_to;
	}
	temp[i] = '\0';
	rev(temp, i);
	return (temp);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int				len_from;
	int				len_to;
	char			*ans;
	long long		res;
	int				i;

	ans = (char *)malloc(sizeof(char) * 40);
	if (!ans)
		return (0);
	i = 0;
	while (i < 40)
		ans[i++] = '\0';
	len_from = base_len(base_from);
	len_to = base_len(base_to);
	if (len_from < 2 || len_to < 2)
		return (0);
	if (check_twice(len_from, base_from) || check_twice(len_to, base_to))
		return (0);
	res = ft_atoi_base(nbr, base_from);
	ans = convert_base_to(res, base_to);
	return (ans);
}
