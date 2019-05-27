/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 21:57:23 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/01/07 21:57:31 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		mid(t_stack *a)
{
	int		i;
	int		dif;
	int		sum;

	i = -1;
	sum = 0;
	dif = MAX_INT;
	while (++i < a->lenght)
		sum += a->stack[i];
	a->mid = sum / a->lenght;
}

int			is_sorted(t_stack *a, t_stack *b)
{
	int		i;

	i = 0;
	if (b->lenght)
		return (0);
	while (++i < a->lenght)
		if (a->stack[i - 1] > a->stack[i])
			return (0);
	return (1);
}

void		is_sort(t_stack *a, t_stack *b)
{
	int		i;

	i = 0;
	if (b->lenght)
		print_error(ERR_CHECKER);
	while (++i < a->lenght)
		if (a->stack[i - 1] > a->stack[i])
			print_error(ERR_CHECKER);
	ft_printf(CHECKER_OK);
}