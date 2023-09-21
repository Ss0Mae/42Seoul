/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seongjo <seongjo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/06 14:36:10 by seongjo           #+#    #+#             */
/*   Updated: 2023/08/08 19:55:34 by seongjo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "do_op.h"

int	calculate(char *c, int a, int b)
{
	int	res;
	int	(*op[5])(int, int);

	op[0] = add;
	op[1] = diff;
	op[2] = mul;
	op[3] = mol;
	op[4] = div;
	res = 1;
	if (*c == '+')
		res = op[0](a, b);
	else if (*c == '-')
		res = op[1](a, b);
	else if (*c == '*')
		res = op[2](a, b);
	else if (*c == '%')
		res = op[3](a, b);
	else if (*c == '/')
		res = op[4](a, b);
	return (res);
}

void	do_op(char *value1, char *c, char *value2)
{
	int	v1;
	int	v2;
	int	res;

	res = 1;
	v1 = ft_atoi(value1);
	v2 = ft_atoi(value2);
	if (*c != '+' && *c != '-' && *c != '*'
		&& *c != '/' && *c != '%')
		write(1, "0", 1);
	else if (*c == '/' && v2 == 0)
		write(1, "Stop : division by zero", 23);
	else if (*c == '%' && v2 == 0)
		write(1, "Stop : modulo by zero", 21);
	else
	{
		res = calculate(c, v1, v2);
		ft_putnbr(res);
	}
	write(1, "\n", 1);
}

int	main(int ac, char **av)
{
	if (ac == 4)
		do_op(av[1], av[2], av[3]);
	return (0);
}
