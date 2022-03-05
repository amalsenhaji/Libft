/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:43:32 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/19 05:22:30 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = -1;
	d = (char *)dest;
	s = (char *)src;
	if (!dest && !src)
		return (0);
	if (dest > src)
		while (n--)
			d[n] = s[n];
	else
		ft_memcpy (dest, src, n);
	return (dest);
}
