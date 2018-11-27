/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/21 19:13:24 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/21 19:13:25 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strnstr(const char *str, const char *sub, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	if (str == sub)
		return ((char*)(str));
	if (!(n = ft_strlen(sub)))
		return ((char*)(str));
	while (str[i] && i + n < len)
	{
		if (!ft_memcmp(&str[i], sub, n))
			return ((char*)(&str[i]));
		i++;
	}
	return (0);
}
