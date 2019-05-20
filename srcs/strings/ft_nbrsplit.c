/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbrsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 19:12:17 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/29 19:12:21 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"
#define SIZE_T_MAX 65535

/*
** ft_subnbr: ft_atoi: space simbol is not used
*/

static int			ft_subnbr(char const *s, int start)
{
	int				i;
	size_t			len;

	i = 0;
	len = 0;
	if (!s || (start > (int)ft_strlen(s)))
		return (0);
	return (ft_atoi(&(s[start])));
}

int					*ft_nbrsplit(char const *s, char c)
{
	int				i;
	int				j;
	int				*nbr;

	i = 0;
	j = 0;
	if (!s || !(nbr = (int*)malloc(sizeof(int) * count_words(s, c))))
		return (0);
	if (s[i] != c && count_words(s, c))
		if (!(nbr[j++] = ft_subnbr(s, i++)))
		{
			free(&nbr);
			return (0);
		}
	i--;
	while (s[++i + 1] && count_words(s, c))
		if (s[i] == c && s[i + 1] != c)
			if (!(nbr[j++] = ft_subnbr(s, i + 1)))
			{
				free(&nbr);
				return (0);
			}
	return (nbr);
}
