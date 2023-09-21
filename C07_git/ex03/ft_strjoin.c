/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:42:58 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/06 19:43:34 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str)
{
	int	len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char	*make_new_str(int size, char **strs, char *sep)
{
	int		strs_len;
	int		sep_len;
	int		i;
	int		tot_len;
	char	*str;

	tot_len = 0;
	i = 0;
	strs_len = 0;
	sep_len = ft_len(sep) * (size - 1);
	while (i < size)
		strs_len += ft_len(strs[i++]);
	tot_len = strs_len + sep_len;
	if (size <= 0)
		tot_len = 1;
	str = (char *)malloc(sizeof(char) * tot_len);
	if (str == 0)
		return (0);
	return (str);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*ans;
	int		i;
	int		j;
	int		k;

	i = -1;
	k = 0;
	ans = make_new_str(size, strs, sep);
	while (++i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			ans[k++] = strs[i][j];
			j++;
		}
		j = 0;
		while (sep[j] && i != size - 1)
		{
			ans[k++] = sep[j];
			j++;
		}
	}
	ans[k] = '\0';
	return (ans);
}
