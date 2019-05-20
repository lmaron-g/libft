/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 21:54:29 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/01/07 21:54:31 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int		ft_median(int *stack, int lenght)
{
	int	i;
	int	j;
	int	min;
	int	dif;

	i = 1;
	dif = MAX_INT;
	min = find_min_(stack, lenght);
	while (i < lenght / 2)
	{
		j = 0;
		while (j < lenght)
		{
			if (stack[j] - min > 0 && stack[j] - min < dif)
				dif = stack[j] - min;
			j++;
		}
		min += dif;
		dif = MAX_INT;
		i++;
	}
	return (min);
}