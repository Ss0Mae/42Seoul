/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 18:20:04 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/03 15:26:05 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	idx;
	int	size;

	arr = 0;
	idx = 0;
	size = max - min;
	if (min >= max)
		return (arr);
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == 0)
		return (0);
	while (min < max)
	{
		arr[idx] = min;
		min++;
		idx++;
	}
	return (arr);
}
