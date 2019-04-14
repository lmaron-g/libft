/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 21:54:29 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/01/07 21:54:31 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

int ft_min(int a, int b)
{
    if (a < b)
        return a;
    return b;
}

int ft_min_abs(int a, int b)
{
    if (ft_abs(a) < ft_abs(b))
        return a;
    return b;
}