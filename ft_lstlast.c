/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/11 05:24:32 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/11 05:27:00 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*cp;

	if (!(lst))
		return (lst);
	cp = lst;
	while (cp->next)
		cp = cp->next;
	return (cp);
}
