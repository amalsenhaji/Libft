/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:13:22 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/19 05:57:58 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*t;
	unsigned char	*t1;
	size_t			i;

	i = 0;
	if (!n)
		return (0);
	t = (unsigned char *)s1;
	t1 = (unsigned char *)s2;
	while (i < n - 1 && t[i] == t1[i])
		i++;
	return (t[i] - t1[i]);
}
