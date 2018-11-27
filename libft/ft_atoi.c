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

#include "libft.h"
#define SP(c) (c == ' ' || c == '\n' || c == '\t' || \
						c == '\v' || c == '\f' || c == '\r')

int					ft_atoi(const char *str)
{
	unsigned int	num;
	int 			i;
	int 			sign;

	num = 0;
	sign = 1;
	i = 0;
	while (str[i] && SP(str[i]))
		i++;
	if (str[i] == '+')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		num = num * 10 + str[i] - '0';
		i++;
	}
	if (num > 2147483647 && sign == 1)
		return (-1);
	else if (num > 2147483648 && sign == -1)
		return (0);
	return ((int)sign * num);
}
