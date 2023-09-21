/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/24 20:06:36 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/26 20:58:49 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_str(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		return (1);
	else if (*str >= 'a' && *str <= 'z')
		return (2);
	else if (*str >= '0' && *str <= '9')
		return (3);
	else
		return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	if (check_str(&str[i]) == 2)
		str[i] = str[i] - 'a' + 'A';
	i++;
	while (str[i] != '\0')
	{
		if (check_str(&str[i - 1]) == 0)
		{
			if (check_str(&str[i]) == 2)
				str[i] = str[i] - 'a' + 'A';
		}
		else if (check_str(&str[i - 1]) != 0)
		{
			if (check_str(&str[i]) == 1)
				str[i] = str[i] - 'A' + 'a';
		}
		i++;
	}
	return (str);
}
