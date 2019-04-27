/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 12:58:24 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/22 12:58:30 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char		*ft_strnew(size_t size)
{
	if (size == SIZE_T_MAX)
		print_error("ft_strnew: incorrect size");
	return ((char *)ft_memalloc(sizeof(char) * (size + 1)));
}
