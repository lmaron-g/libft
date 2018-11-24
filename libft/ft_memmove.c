/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 18:22:21 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/20 18:22:22 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memmove(void *dst, const void *src, size_t n)
{
	int		i;
	char	*dest;
	char	*sour;
	char	*temp;

	i = n;
	dest = (char*)dst;
	sour = (char*)src;
	temp = (char*)malloc(sizeof(char) * n);
	while (i--)
		temp[i] = sour[i];
	dest[n] = '\0';
	while (n--)
		dest[n] = temp[n];
	free(temp);
	return (dst);
}
