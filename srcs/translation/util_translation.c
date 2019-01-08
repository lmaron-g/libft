/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   util_translation.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 17:20:15 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/01/07 17:20:17 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

char					*ft_itoa_ll(long long int n)
{
	long long int		i;
	long long int		sign;
	unsigned long long	nbr;
	char				*str;

	sign = 0;
	if (n < 0)
	{
		nbr = -n;
		sign = 1;
	}
	else
		nbr = n;
	i = ft_nbrlen_u(nbr) + sign;
	str = ft_strnew(i);
	if (!str)
		return (NULL);
	while (--i >= sign)
	{
		str[i] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (sign)
		str[0] = '-';
	return (str);
}

char					*ft_itoa_ull(unsigned long long nb)
{
	char				*str;
	unsigned long long	nbr;
	int					i;

	i = 0;
	if (!(str = (char*)malloc(sizeof(char) * ft_nbrlen_u(nb) + 1)))
		return (NULL);
	nbr = nb;
	str[ft_nbrlen_u(nb) - i++] = '\0';
	while (nbr >= 10)
	{
		str[ft_nbrlen_u(nb) - i++] = (nbr % 10) + 48;
		nbr /= 10;
	}
	str[ft_nbrlen_u(nb) - i++] = (nbr % 10) + 48;
	return (str);
}

char					*ft_itoa_base(int dec, int base, int up)
{
	int					len;
	char				*nbr;
	int					neg;

	neg = 0;
	len = 1;
	if (dec < 0)
		dec *= -1;
	while ((int)ft_pow(base, len) - 1 < dec)
		len++;
	nbr = (char*)malloc(sizeof(char*) * len);
	nbr[len + neg] = '\0';
	while (len-- > 0)
	{
		if (!up)
			nbr[len + neg] = (dec % base) + (dec % base > 9 ? 'a' - 10 : '0');
		else
			nbr[len + neg] = (dec % base) + (dec % base > 9 ? 'A' - 10 : '0');
		dec = dec / base;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}

char					*ft_itoa_base_ull(unsigned long long dec,
															int base, char x)
{
	int					len;
	char				*nbr;
	int					neg;

	neg = 0;
	len = 1;
	while (ft_pow(base, len) - 1 < dec)
		len++;
	nbr = (char*)malloc(sizeof(char*) * len);
	nbr[len + neg] = '\0';
	while (len-- > 0)
	{
		if (x == 'x')
			nbr[len + neg] = (dec % base) + (dec % base > 9 ? 'a' - 10 : '0');
		else
			nbr[len + neg] = (dec % base) + (dec % base > 9 ? 'A' - 10 : '0');
		dec = dec / base;
	}
	if (neg)
		nbr[0] = '-';
	return (nbr);
}

char					*ft_ftoa(long double nbr, int afterpoint)
{
	char				*src;
	unsigned char		trans;
	int					i;
	int					j;

	src = (char*)malloc(sizeof(char) * ++afterpoint);
	i = afterpoint + 1;
	if (nbr < 0 && !(j = 0))
	{
		nbr = -nbr;
		src[j++] = '-';
	}
	while ((int)nbr > 10 && ++i)
		nbr /= (long double)10.0;
	while (i-- > 0)
	{
		trans = (long int)nbr;
		src[j++] = trans | 0x30;
		if (i == afterpoint)
			src[j++] = '.';
		nbr -= (double)trans;
		nbr *= (long double)10.0;
	}
	src[j++] = '\0';
	return (round_it(&src));
}
