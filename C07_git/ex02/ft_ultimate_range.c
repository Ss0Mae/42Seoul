/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/31 17:22:27 by seongjo           #+#    #+#             */
/*   Updated: 2023/07/31 19:15:14 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	idx;
	int	min_tmp;
	int	size;
	int	*arr;

	idx = 0;
	min_tmp = min;
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	arr = (int *)malloc(sizeof(int) * size);
	if (arr == 0)
		return (-1);
	while (min_tmp < max)
		arr[idx++] = min_tmp++;
	*range = arr;
	return (max - min);
}
