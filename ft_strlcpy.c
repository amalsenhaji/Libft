/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 09:59:40 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/22 23:40:00 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = ft_strlen(src);
	j = -1;
	if (i + 1 < size)
		while (++j <= i)
			dst[j] = src[j];
	else if (size)
	{
		while (++j < size - 1)
			dst[j] = src[j];
		dst[j] = 0;
	}
	return (i);
}
