/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 22:04:37 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/21 22:04:39 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define A(c) (c == ' ')
#define B(c) (c == '\n')
#define C(c) (c == '\t')
#define D(c) (c == '\v')
#define I(c) (c == '\f')
#define F(c) (c == '\r')

#define SP(c) (A(c) || B(c) || C(c) || D(c) || I(c) || F(c))

#include "libft.h"

int					ft_atoi(const char *str)
{
	unsigned int	num;
	int				i;
	int				sign;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] && SP(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i++] == '-')
		sign = -1;
	if (sign == 1)
		i--;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	return ((int)sign * num);
}
