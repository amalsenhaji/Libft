/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/03 15:06:24 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/19 06:01:45 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*str;

	str = malloc(sizeof(char) * (n * size));
	if (!str)
		return (NULL);
	ft_bzero(str, n * size);
	return (str);
}
