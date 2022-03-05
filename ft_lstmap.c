/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 05:19:04 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/16 05:19:21 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*cp;
	t_list	*c;

	if (!lst || !f)
		return (NULL);
	c = NULL;
	while (lst)
	{
		cp = (t_list *)ft_lstnew(f(lst->content));
		if (!cp)
			ft_lstclear(&c, del);
		ft_lstadd_back(&c, cp);
		lst = lst->next;
	}
	return (c);
}
