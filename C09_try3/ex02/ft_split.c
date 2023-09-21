/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/05 14:51:46 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/06 17:20:22 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_sep(char c, char *sep)
{
	while (*sep)
	{
		if (*sep == c)
			return (1);
		sep++;
	}
	return (0);
}

char	*my_strdup(char *str, char *charset)
{
	int		len;
	char	*dest;
	int		i;

	i = 0;
	len = 0;
	while (str[len] && is_sep(str[len], charset) == 0)
		len++;
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while (i < len)
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	count_word(char *str, char *charset)
{
	int	cnt;

	cnt = 0;
	while (*str != 0)
	{
		if (is_sep(*str, charset) == 0)
		{
			cnt++;
			while (is_sep(*str, charset) == 0 && *str)
				str++;
		}
		else
			str++;
	}
	return (cnt);
}

char	**ft_split(char *str, char *charset)
{
	int		i;
	int		len;
	char	**tmp;

	len = count_word(str, charset);
	tmp = (char **)malloc(sizeof(char *) * (len + 1));
	if (tmp == 0)
		return (0);
	i = 0;
	str = &str[0];
	while (*str)
	{
		if (is_sep(*str, charset) == 0)
		{
			tmp[i++] = my_strdup(str, charset);
			while (is_sep(*str, charset) == 0 && *str)
				str++;
		}
		else
			str++;
	}
	tmp[i] = 0;
	return (tmp);
}
