/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 11:29:27 by amsenhaj          #+#    #+#             */
/*   Updated: 2021/11/22 21:51:34 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"libft.h"

int	ft_sizenum(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n = n * (-1);
	}
	while (n)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	ft_teen(int sizenum)
{
	int	i;

	i = 1;
	if (sizenum == 1)
		return (1);
	while (sizenum > 1)
	{
		i = i * 10;
		sizenum--;
	}
	return (i);
}

void	ft_filltab(char *res, int size, int sizenum, int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n = n * (-1);
		res[0] = '-';
		i++;
		sizenum--;
	}
	while (i < size)
	{
		res[i] = ((n / ft_teen(sizenum)) % 10) + 48;
		sizenum--;
		i++;
	}
	res[i] = '\0';
}

char	*ft_itoa(int n)
{
	int		sizenum;
	int		size;
	char	*res;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	sizenum = ft_sizenum(n);
	size = sizenum;
	res = (char *)malloc(sizeof(char) * (sizenum + 1));
	if (res == NULL)
		return (NULL);
	ft_filltab(res, size, sizenum, n);
	return (res);
}
