/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 17:46:18 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/21 17:46:24 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t j;

	j = strlen((char*)src);
	i = strlen(dst);
	if (i >= size)
		return (i);
	size--;
	while (*src && i < size)
		dst[i++] = *src++;
	dst[i] = '\0';
	return (j + i);
}
