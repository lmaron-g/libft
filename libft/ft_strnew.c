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

#include "libft.h"
#define SIZE_T_MAX 65535

char		*ft_strnew(size_t size)
{
	char	*area;

	if (size == SIZE_T_MAX)
		size--;
	if (!(area = (char*)malloc(size + 1)))
		return (0);
	ft_memset(area, (int)'\0', size + 1);
	return (area);
}
