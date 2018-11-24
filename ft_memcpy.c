/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 17:11:46 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/20 17:11:48 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, void *src, size_t n)
{
	char	*dest;
	char	*sour;

	dest = (char*)dst;
	sour = (char*)src;
	dest[n] = '\0';
	while (--n)
		dest[n] = sour[n];
	return (dst);
}
