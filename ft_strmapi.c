/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 13:07:45 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/15 08:53:59 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*t;

	i = 0;
	if (!s || (!s &&!f))
		return (ft_strdup(""));
	else if (!f)
		return (ft_strdup((char *)s));
	t = ft_strdup((char *)s);
	if (!t)
		return (t = NULL);
	while (t[i])
	{
		t[i] = (*f)(i, t[i]);
		i++;
	}
	return (t);
}
