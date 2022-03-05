/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 12:58:21 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/19 05:59:16 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

char	*ft_strnstr(const char *s, const char *f, size_t n)
{
	int		i;
	char	*ptr;

	ptr = (char *)s;
	if (!*f)
		return (ptr);
	while (*ptr && n)
	{
		if (*ptr == *f)
		{
			i = 1;
			while (f[i] && ptr[i] == f[i] && n >= ft_strlen(f))
				i++;
			if (!f[i])
				return (ptr);
		}
		ptr++;
		n--;
	}
	return (0);
}
