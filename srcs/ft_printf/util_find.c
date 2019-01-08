/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_find.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:19:42 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/01/07 17:19:45 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		find_flags(t_specifier *spec, char *src)
{
	int		i;

	i = 0;
	spec->flag_minus = 0;
	spec->flag_spase = 0;
	spec->flag_plus = 0;
	spec->flag_hash = 0;
	spec->flag_zero = 0;
	while (is_flag(src[i]))
	{
		if (src[i] == '-')
			spec->flag_minus = 1;
		if (src[i] == ' ')
			spec->flag_spase = 1;
		if (src[i] == '+')
			spec->flag_plus = 1;
		if (src[i] == '#')
			spec->flag_hash = 1;
		if (src[i] == '0')
			spec->flag_zero = 1;
		i++;
	}
}

int			find_width(char *src, va_list ap)
{
	int		i;

	i = 0;
	while (is_flag(src[i]))
		i++;
	if (src[i] == '*')
		return (va_arg(ap, int));
	if (ft_atoi(&src[i]))
		return (ft_atoi(&src[i]));
	return (0);
}

int			find_precision(char *src, va_list ap)
{
	int		i;

	i = 0;
	while (src[i] && src[i] != '.' && !ft_isalpha(src[i]))
		i++;
	if (src[i++] == '.')
	{
		if (src[i] == '*')
			return (va_arg(ap, int));
		if (ft_atoi(&src[i]))
			return (ft_atoi(&src[i]));
		else
			return (-1);
	}
	return (0);
}

int			contains_lenght(const char *src, const char *sub)
{
	size_t	n;

	n = ft_strlen((char*)sub);
	while (*src && !is_type(*src))
		if (!ft_memcmp(src++, sub, n))
			return (1);
	return (0);
}

int			find_lenght(char *src)
{
	if (contains_lenght(src, "hh"))
		return (20);
	if (contains_lenght(src, "ll"))
		return (10);
	if (contains_lenght(src, "L"))
		return (3);
	if (contains_lenght(src, "h"))
		return (2);
	if (contains_lenght(src, "l"))
		return (1);
	return (0);
}
