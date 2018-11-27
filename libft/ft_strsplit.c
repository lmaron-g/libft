/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/23 18:09:15 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/23 18:09:16 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			co_wo(char *str, char c)
{
	int		i;
	int		cv;

	i = 0;
	cv = 0;
	if (str[0] != c)
	{
		cv++;
		i++;
	}
	i--;
	while (str[++i + 1] != '\0')
		if (str[i] == c && str[i + 1] != c)
			cv++;
	return (cv);
}

int			*lengths(char *str, char c)
{
	int		i;
	int		c_v;
	int		*numbers;

	i = 0;
	c_v = -1;
	numbers = (int*)malloc(co_wo((char *)str, c) * sizeof(int));
	if (str[i] != c)
	{
		c_v = 0;
		numbers[0] = 1;
		numbers[0]++;
		i++;
	}
	i--;
	while (str[i++ + 1] != '\0')
		if (str[i - 1] == c && str[i] != c)
		{
			c_v++;
			numbers[c_v] = 0;
			numbers[c_v]++;
		}
		else if (str[i - 1] != c && str[i] != c)
			numbers[c_v]++;
	return (numbers);
}

char		**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	char	**full;
	int		*numbers;
	int		k;

	k = 0;
	i = 0;
	if (!s || !(full = (char**)malloc(co_wo((char *)s, c) * sizeof(char*) + 1)))
		return (0);
	numbers = lengths((char *)s, c);
	while (i < co_wo((char *)s, c))
	{
		j = 0;
		if (!(full[i] = (char*)malloc((numbers[i] + 1) * sizeof(char))))
			return (0);
		while (s[k] == c)
			k++;
		while (s[k] && s[k] != c)
			full[i][j++] = s[k++];
		full[i][j] = '\0';
		i++;
	}
	full[i] = (char*)'\0';
	return (full);
}
