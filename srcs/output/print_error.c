/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/20 19:59:28 by lmaron-g          #+#    #+#             */
/*   Updated: 2019/05/20 19:59:57 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

void		print_error(char *massage)
{
	if (errno == 0)
		ft_putendl_fd(massage, 2);
	else
		perror(massage);
	exit(1);
}
