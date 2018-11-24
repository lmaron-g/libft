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
#define SP(c) (c == ' ' || c == '\t' || c == '\n')

int	ft_atoi(const char *str)
{
	int	negativ;
	int	number;

	while (*str && SP(*str))
		str++;
	if (*str == 45)
		negativ = 1;
	if (*str == 45 || *str == 43)
		str++;
	while (*str >= 48 && *str <= 57)
		number = (number * 10) + ((int)*str++ - 48);
	if (negativ == 1)
		return (-number);
	return (number);
}
