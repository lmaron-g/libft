/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmaron-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/27 22:20:03 by lmaron-g          #+#    #+#             */
/*   Updated: 2018/11/27 22:20:04 by lmaron-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*fresh;
	t_list	*retrn;

	if (!(fresh = (t_list*)malloc(sizeof(t_list))))
		return 0;
	fresh = f(lst);
	retrn = fresh;
	lst = lst->next;
	while (lst)
	{
		if (!(fresh = (t_list*)malloc(sizeof(t_list))))
			return 0;
		if (!(fresh = f(lst)))
		{
			free((void*)*fresh);
			*fresh = NULL;
		}
		lst = lst->next;
		fresh = fresh->next;
	}

	return (retrn);
}
