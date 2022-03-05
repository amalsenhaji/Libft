/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:17:31 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/22 23:43:29 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*cp;
	t_list	*tmp;

	if (!lst || !(*lst))
		return ;
	if (!del)
		del = free;
	cp = *lst;
	while (cp)
	{
		tmp = cp->next;
		ft_lstdelone(cp, del);
		cp = tmp;
	}
	*lst = NULL;
}
