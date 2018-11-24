/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/20 15:42:09 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/20 15:42:10 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*uc;

	uc = (unsigned char*)b;
	uc[len--] = '\0';
	while (len--)
		uc[len] = (unsigned char)c;
	return (uc);
}
