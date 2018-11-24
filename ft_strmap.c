/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/22 20:06:25 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/22 20:06:27 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmap(char const *s, char (*f)(char))
{
	char	*fresh;

	if (fresh = ft_strnew(ft_strlen((char*)s)))
		while (*str++ && *fresh++)
			*fresh == f((char)*s);
	return (fresh);
}
